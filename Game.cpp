#include "Game.h"

Game::Game()
{
    choice = 0;
    playing = true;
}

Game::~Game()
{
    
}

//Functions
void Game::initGame()
{
    string name;
    cout << "Enter your Characters Name: ";
    getline(cin, name);
    
    character.initialise(name);
    
    cout << endl;
    cout << "Welcome to the Jura Tempest Federation" << endl;
    cout << "You have been lucky enough to get a name! \n";
    cout << "You can view your name and your other stats on your stat sheet by pressing 5";
}

void Game::mainMenu()
{
    cout << endl;
    cout << "= MAIN MENU =" << endl;
    
    cout << "0: Quit" << endl;
    cout << "1: Travel" << endl;
    cout << "2: Shop" << endl;
    cout << "3: Level Up" << endl;
    cout << "4: Reset" << endl;
    //cout << "5: Character Stats" << endl;
    
    cout << endl << "Choice: ";
    cin >> choice;
    
    switch (choice){
        case 0:
            playing = false;
            break;
        case 5:
            character.printStats();
        
        default:
            break;
    }
}