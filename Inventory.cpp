#include "Inventory.h"

Inventory::Inventory()
{
    this->cap = 0;
    this->numOfItems = 0;
    this->itemArr = new Item*[cap];
}

Inventory::~Inventory()
{
    for (size_t i = 0; i < this->numOfItems; i++)
    {
        delete this->itemArr[i];
    }
    delete[] this->itemArr;
}

void Inventory::initialise(const int from)
{
    for (size_t i = from; i < this->cap; i++)
    {
        this->itemArr[i] = nullptr;
    }
}

void Inventory::expand()
{
    this->cap *= 2;
    
    Item **tempArr = new Item*[this->cap];
    
    for (size_t i = 0; i < this->numOfItems; i++)
    {
        tempArr[i] = new Item(*this->itemArr[i]);
    }
    
    for (size_t i = 0; i < this->numOfItems; i++)
    {
        delete this->itemArr[i];
    }
    
    delete[] this->itemArr;
    
    this->itemArr = tempArr;
    
    this->initialise(this->numOfItems);
    
}

void Inventory::addItem(const Item &item)
{
    if (this->numOfItems >= this->cap)
    {
        expand();
    }
    
    this->itemArr[this->numOfItems++] = new Item(item);
}

void Inventory::removeItem(int index)
{
    
}