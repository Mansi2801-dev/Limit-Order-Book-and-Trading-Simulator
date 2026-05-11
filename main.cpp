#include "include/order.h"
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool comp(Order a, Order b){
    return a.getPrice()>b.getPrice();
}
int main(){
    vector<Order>Portfolio;
    vector<Order>Askbook;
    vector<Order>Bidbook;
    Portfolio.emplace_back(1, 34, "BUY", 12.4);
    Portfolio.emplace_back(2, 57, "BUY", 124);
    Portfolio.emplace_back(3, 4, "BUY", 57.84);
    Portfolio.emplace_back(4, 64, "BUY", 1000.6);
    Portfolio.emplace_back(1, 34, "SELL", 12.4);
    Portfolio.emplace_back(2, 57, "SELL", 124);
    Portfolio.emplace_back(3, 4, "SELL", 57.84);
    Portfolio.emplace_back(4, 64, "SELL", 1000.6);

    sort(Portfolio.begin(), Portfolio.end(), comp);
    for(int i =0; i<Portfolio.size(); i++ ){
        if (Portfolio[i].getSide()=="BUY"){
            Bidbook.emplace_back(Portfolio[i]);
        }
        else{
            Askbook.emplace_back(Portfolio[i]);
        }

    }
    for(int i =0; i<Askbook.size(); i++ ){
        Askbook[i].displayOrder();
    }
    cout<<"This was Askbook\n";
    for(int i =0; i<Bidbook.size(); i++ ){
        Bidbook[i].displayOrder();
    }
    cout<<"This was Bidbook";
        
    


}

