#ifndef INVENTORY_H
#define INVENTORY_H

#include "Item.h"

class Inventory
{
    public:
        Inventory();
        ~Inventory();
        
        void addItem(const Item &item);
        void removeItem(int index);
        inline void debugPrint() const
        {
            for (int i = 0; i < this->numOfItems; i++)
            {
                cout << this->itemArr[i]->debugPrint() << endl;
            }
        }
        
    private:
        int cap;
        int numOfItems;
        Item **itemArr;
        void expand();
        void initialise(const int from);
};

#endif