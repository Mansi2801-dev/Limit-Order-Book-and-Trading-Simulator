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
    Portfolio.emplace_back(1, 34, "BUY", 12.4);
    Portfolio.emplace_back(2, 57, "BUY", 124);
    Portfolio.emplace_back(3, 4, "BUY", 57.84);
    Portfolio.emplace_back(4, 64, "BUY", 1000.6);

    sort(Portfolio.begin(), Portfolio.end(), comp);
    for(int i =0; i<Portfolio.size(); i++ ){
        Portfolio[i].displayOrder();
    }
    


}

