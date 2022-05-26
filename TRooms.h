#ifndef Rooms_H_
#define Rooms_H_
#include <iostream>

class Rooms{

private:
       std::string items;
       std::string weapons;
       std::string enemies;

public:
       Rooms(); // default constructor

       // a constructor that takes the instrument played and the years of experience
       Rooms(std::string items, std::string weapons, std::string enemies);
       
       // returns the items in the room
       std::string get_items();
       
       // returns the weapons in the room
       std::string get_weapons();
       
       // returns the enemies in the room
       std::string get_enemies();
       
       ~Rooms(); // default destructor

};

#endif /* Room_H_ */