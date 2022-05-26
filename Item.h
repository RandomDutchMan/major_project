#ifndef ITEM_H
#define ITEM_H

#include <iostream>
#include <iomanip>
#include <string>
#include <math.h>

using namespace std;

class Item
{
    public:
        Item();
        virtual ~Item();
    
        inline string debugPrint() const { return this->name; }
        
    private:
        string name;
        int buyValue;
        int sellValue;
        
};

#endif