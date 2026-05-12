#pragma once
#include<string>
#include<iostream>
using namespace std;

class Order{
    private:
        int id;
        int quantity;
        string side;
        double price;
    
        public:
        Order(int id, int quantity, string side, double price): id(id), quantity(quantity), side(side), price(price){

        }
        void displayOrder(){
            cout << "ID: " << id
            << " | Side: " << side
            << " | Quantity: " << quantity
            << " | Price: " << price
            << endl;
        }
        double getPrice() const{
            return price;
        }
        string getSide() const{
            return side;
        }
        int getId() const{
            return id;
        }
        int getQuantity() const{
            return quantity;
        }
        
        


        
};