#pragma once
#include "order.h"
#include <vector>

using namespace std;

class OrderBook{
    private:
        vector<Order> askBook;
        vector<Order> bidBook;
    public:
        void addOrder(const Order& order);
};