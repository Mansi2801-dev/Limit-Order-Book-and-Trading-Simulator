#include "include/order.h"
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool comp(const Order &a, const Order &b){
    return a.getPrice()>b.getPrice();
}
bool comp2(const Order &a, const Order &b){
    return a.getPrice()<b.getPrice();
}
int main(){
    vector<Order>Portfolio;
    vector<Order>askBook;
    vector<Order>bidBook;
    Portfolio.emplace_back(1, 34, "BUY", 12.4);
    Portfolio.emplace_back(2, 57, "BUY", 124);
    Portfolio.emplace_back(3, 4, "BUY", 57.84);
    Portfolio.emplace_back(4, 64, "BUY", 1000.6);
    Portfolio.emplace_back(1, 34, "SELL", 12.4);
    Portfolio.emplace_back(2, 57, "SELL", 124);
    Portfolio.emplace_back(3, 4, "SELL", 57.84);
    Portfolio.emplace_back(4, 64, "SELL", 1000.6);

    
    for(int i =0; i<Portfolio.size(); i++ ){
        if (Portfolio[i].getSide()=="BUY"){
            bidBook.emplace_back(Portfolio[i]);
        }
        else{
            askBook.emplace_back(Portfolio[i]);
        }

    }
    
    sort(bidBook.begin(), bidBook.end(), comp);
    sort(askBook.begin(), askBook.end(), comp2);
    
    for(int i =0; i<askBook.size(); i++ ){
        askBook[i].displayOrder();
    }
    cout<<"This was Askbook\n";
    
    for(int i =0; i<bidBook.size(); i++ ){
        bidBook[i].displayOrder();
    }
    cout<<"This was Bidbook\n";

    if (bidBook[0].getPrice()>= askBook[0].getPrice()){
            cout<<"Trade Executed\n";
            cout<<"Buy Price:"<<bidBook[0].getPrice()<<endl;
            cout<<"Sell Price:"<<askBook[0].getPrice();

    }
        
    


}

