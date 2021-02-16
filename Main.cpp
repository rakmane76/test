#include"Item.h"
#include<fstream>
#include <nlohmann/json.hpp>
#include<iomanip>

using json = nlohmann::json;

// Combine item of receipt at single place (store all components of item in struct). 
struct ItemDetails {
    Item        *itemD;
    Category    *categoryD;
    Import      *importD;
    ItemDetails(Item *i, Category *c, Import *ii):itemD(i), categoryD(c), importD(ii) {};
};

// For parsing Json data and storing in temporarily before creating item. 
struct sItem{
    string description;
    int qty;
    double priceUnit;
    string category;
    string import;
};

// Holds all details of Receipt.. 
// Actual Data for Unit Testing.. 
vector<vector<ItemDetails>> ReceiptList;

// Clean allocated memory after testing is complete.. 
void cleanReceiptList(){
    for ( auto &receipt : ReceiptList){
        for ( auto &itemDetail : receipt){
            delete itemDetail.itemD;
            delete itemDetail.categoryD;
            delete itemDetail.importD;
        }
    }
}

// Parse Input Json data receipt and store it in Testing List.. 
void JsonToList(json &jReceipt){
    vector<ItemDetails> vReceipt;
    for ( auto &receipt : jReceipt) {
        sItem tmpSItem;
        tmpSItem.description = receipt.value("description", "Dummy");
        tmpSItem.qty         = receipt.value("quantity", 0);
        tmpSItem.priceUnit   = receipt.value("PriceUnit", 0.00);
        tmpSItem.category    = receipt.value("Category", "other");
        tmpSItem.import      = receipt.value("Import", "no");
        
        // Create correct Item, Category, Import and club it in struct to store it in list.  
        Item    *tmpItem = new Item(tmpSItem.description, tmpSItem.qty, tmpSItem.priceUnit);
        Category *tmpCategory = new Category(*tmpItem, tmpSItem.category);
        Import  *tmpImport = new Import(*tmpItem, tmpSItem.import);
        
        ItemDetails tmpItemDetails(tmpItem, tmpCategory, tmpImport); // club all item data in struct.. 
        vReceipt.push_back(tmpItemDetails); // Store item as part of a receipt.. 
    }
    ReceiptList.push_back(vReceipt); // Store receipt in list of receipts.(Test Data)
}

// Process Receipt.. 
// Generate Tax , Total Sum and Print (cout) accordingly... 
void ProcessReceipt(vector<ItemDetails> &receipt){
    double totalTaxReceipt = 0.0, totalSumReceipt = 0.0;
    for ( auto &itemDetail : receipt){
        itemDetail.itemD->SetTotalTax(itemDetail.categoryD->GenerateTax() + itemDetail.importD->GenerateTax()); // Sum tax + import for item.. 
        itemDetail.itemD->GenerateTotalPrice();
        totalTaxReceipt += itemDetail.itemD->GetTotalTax(); // add tax of item to receipt.
        totalSumReceipt += itemDetail.itemD->GetTotalPrice(); // add total of item to receipt. 
        cout << std::fixed << std::setprecision(2) << *(itemDetail.itemD) << endl;
    }

    cout << std::fixed << std::setprecision(2) << "Sales Tax: " << totalTaxReceipt << endl;
    cout << std::fixed << std::setprecision(2) << "Total: " << totalSumReceipt << endl;
}


int main(){
    // Read inventory from file.. 
    ifstream infile("sales_input.json");
    string line;
    while(infile.good()){
        getline(infile, line);        
        if (line.empty()) continue;

        json jReceipt = json::parse(line);
        JsonToList(jReceipt); // store each receipt to list of receipts. 
    }

    // Read each Receipt from list and calculate tax and total.
    int i = 0;
    for (auto &receipt : ReceiptList){
        cout << "Print Receipt :" << ++i << endl;
        ProcessReceipt(receipt);
        cout << "-----------------" << endl << endl;
    }

    cleanReceiptList(); // clean allocated memory.. 

    return 0;
}