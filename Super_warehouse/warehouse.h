#ifndef INVENTORY_H
#define INVENTORY_H

#include <iostream>
#include <cstring>
using namespace std;

class Inventory{
    public:
        Inventory();
        Inventory(string d,string i,string n,string p, string a);

        void setDate(string d);
        void setID(string i);
        void setName(string n);
        void setPrice(string p);
        void setAmount(string a);

        string getDate();
        string getID();
        string getName();
        string getPrice();
        string getAmount();

    private:
        string date;
        string id;
        string name;
        string price;
        string amount;
};
#endif