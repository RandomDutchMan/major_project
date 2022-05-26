#include "Rooms.h"

Rooms::Rooms() : items("null") , weapons("null"), enemies("null"){
}

Rooms::Rooms(std::string items, std::string weapons, std::string enemies) : items(items), weapons(weapons), enemies(enemies){
}

std::string Rooms::get_items(){
       return instrument;
}

std::string Rooms::get_weapons(){
       return weapons;
}

std::string Rooms::get_enemies(){
       return enemies;
}

Rooms::~Room(){
}