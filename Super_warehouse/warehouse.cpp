#include "warehouse.h"
#include <iostream>
#include <cstring>
#include <vector>
#include <cmath>

using namespace std;

    Inventory::Inventory(){
        date = "01/01/2000";
        id = "00000";
        name = "Null";
        price = "$0.00";
        amount = "0";
    }
    Inventory::Inventory(string d,string i,string n,string p, string a){
        date = d;
        id = i;
        name = n;
        price = p;
        amount = a;
    }

    void Inventory::setDate(string d){
        date = d;
    }
    void Inventory::setID(string i){
        id = i;
    }
    void Inventory::setName(string n){
        name = n;
    }
    void Inventory::setPrice(string p){
        price = p;
    }
    void Inventory::setAmount(string a){
        amount = a;
    }

    string Inventory::getDate(){
        return date;
    }
    string Inventory::getID(){
        return id;
    }
    string Inventory::getName(){
        return name;
    }
    string Inventory::getPrice(){
        return price;
    }
    string Inventory::getAmount(){
        return amount;
    }