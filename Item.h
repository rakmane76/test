#ifndef __ITEM_H__
#define __ITEM_H__

#include<string>
#include<map>
#include<algorithm>
#include<iostream>
#include<sstream>


using namespace std;

class Item {
    protected : 
        string  description;
        int     quantity;
        double  pricePerUnit;
        double  totalTax;
        double  totalPrice;
    
    public :
        Item():description(""), quantity(0), pricePerUnit(0.0), totalTax(0.0), totalPrice(0.0) {}; 
        Item(string s, int q, double price):description(s), quantity(q), pricePerUnit(price), totalTax(0.0), totalPrice(0.0){};

        virtual double GenerateTax();
        void GenerateTotalPrice();
        
        
        void SetDescription(string desc) {description = desc;}
        void SetPricePerUnit(double price) {pricePerUnit = price;}
        void SetTotalTax(double tax) { totalTax = tax;}
        double GetTotalTax() { return totalTax; }
        double GetTotalPrice() { return totalPrice; }
        void DoRounding(double &tax);
        
        friend ostream & operator << ( ostream &os , Item &item);
};

// Decorator pattern implemented, let Category and Import be separately place from the item.. 
// This can help maintaining and scalability of the project. 
// In future if new components need to be added for taxing the item ( eg. GST, VAT, discount etc. )
// New class can be created for each taxing component. This way we will not touch existing Item class. 

class Category : public Item {
    static const map<string, double> mapCategory; // keep all categories("food", "medical") and their associated tax component.
    
    protected :
        Item    &item; // this will be same item it is calculating tax for. 
        string  category;

    public :
        Category(Item &i):item(i),category("") {};
        Category(Item &i, string cat):item(i),category(cat) { transform(category.begin(), category.end(), category.begin(), ::tolower);};
        
        virtual double GenerateTax(); // generate tax dynamically for item. 
};

class Import : public Item {
    static const map<string, double>  mapImport; // keep information of Import and its value..
    
    protected :
        Item    &item; // will store same item it is calculating import for. 
        string  import;

    public : 
        Import(Item &i):item(i), import("") {};
        Import(Item &i, string imp):item(i), import(imp) { transform(import.begin(), import.end(), import.begin(), ::tolower); };
        
        virtual double GenerateTax(); // generate tax dynamically for its item.
};


#endif