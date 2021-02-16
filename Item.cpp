#include"Item.h"
#include<iomanip>

const map<string, double> Category::mapCategory {
                                                    {"food", 0.0},
                                                    {"medical", 0.0},
                                                    {"book", 0.0},
                                                    {"other", 0.10}
                                                };
    

const map<string, double>  Import::mapImport {
                                                {"no",0.0},
                                                {"yes",0.05}
                                             };


double Item::GenerateTax(){
    return pricePerUnit*quantity;
}

void Item::GenerateTotalPrice(){
    totalPrice += pricePerUnit*quantity + totalTax;
}

void Item::DoRounding(double &tax){
    stringstream stream;
    stream << std::fixed << std::setprecision(2) << tax;
    string str = stream.str();
    char c = str[str.size() -1];
    tax = std::stod(str);

    switch (c)
    {
        case '1':
        case '6':
                    tax += 0.04;
                    break;
        case '2':
        case '7':
                    tax += 0.03;
                    break;
        case '3':
        case '8':
                    tax += 0.02;
                    break;
        case '4':
        case '9':
                    tax += 0.01;
                    break;
        default:
                    break;
    }
}

ostream & operator << ( ostream &os , Item &item){
    os << item.quantity <<" " << item.description << ": " << item.totalPrice;
    return os;
}

double Category::GenerateTax(){
    double tax = 0.10;
    if (mapCategory.find(category) != mapCategory.end()) tax = mapCategory.at(category);
    tax = item.GenerateTax()*tax; // call item's component too to generate tax.
    DoRounding(tax);
    return tax;
}

double Import::GenerateTax(){
    double tax = 0.0;
    if(mapImport.find(import) != mapImport.end()) tax = mapImport.at(import);
    tax = item.GenerateTax()*tax; // call item's component too to generate tax.
    DoRounding(tax);
    return tax;
}
