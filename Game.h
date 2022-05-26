#ifndef GAME_H
#define GAME_H

#include <ctime>
#include "Functions.h"
#include "Character.h"

class Game
{
    public:
        Game();
        virtual ~Game();
        
        //Operators
        
        
        //Functions
        void initGame();
        void mainMenu();
        
        //Accessors
        bool getPlaying() const {return this->playing; }
        
        //Modifiers
        
        
    private:
        int choice;
        bool playing;
        
        //Character Info
        Character character;
};

#endif