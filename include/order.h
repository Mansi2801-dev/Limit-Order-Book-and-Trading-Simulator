#pragma once
#include<string>
#include<iostream>
using namespace std;

class Order{
    private:
        int id;
        int quantity;
        string side;
        float price;
    
        public:
            Order(int id, int quantity, string side, float price): id(id), quantity(quantity), side(side), price(price){

            }
        void displayOrder(){
            cout << "ID: " << id
            << " | Side: " << side
            << " | Quantity: " << quantity
            << " | Price: " << price
            << endl;
        }

        
};