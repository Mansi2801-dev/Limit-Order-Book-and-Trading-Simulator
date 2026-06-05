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
        long sequenceNumber;
        static long nextSequenceNumber;
    
        public:
        Order(int id, int quantity, string side, double price): id(id), quantity(quantity), side(side), price(price), sequenceNumber(nextSequenceNumber++){

        }
        void displayOrder(){
            cout << "ID: " << id
            << " | Side: " << side
            << " | Quantity: " << quantity
            << " | Price: " << price
            << " | Seq: "<< sequenceNumber
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
        void setQuantity(int newQuantity){
            quantity = newQuantity;
        }
        long getSequenceNumber() const{
            return sequenceNumber;
        }
};
long Order::nextSequenceNumber = 1;