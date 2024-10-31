#include <iostream>
#include "Explorer.hpp"
#include "Exit.hpp"
#include "Pit.hpp"

using namespace std ;

int main() {

    Explorer explorer (5, 5) ;
    

    Exit exit (5, 5) ;
    

    Pit pit (2, 2, 1, 1) ;
    

    cout << "Initial Stamina is " << explorer.getStamina () << endl;

    explorer . move (2, 2);
    cout << "Moved to Pit at (2, 2), stamina after jumping is " << explorer.getStamina () << endl;

    explorer . move(2, 2);
    bool exitReached = exit.interact(&explorer) ;
    
    if (exitReached) {
        cout << "Explorer reached the Exit!" << endl ;
    } else {
        cout << "Explorer did not reach the Exit." << endl ;
    }

    explorer . move(-1, 0);
    cout << "Moved to (1, 2). Stamina: " << explorer.getStamina() << endl ;


    explorer . move(1, 0);
    bool pitInteraction = pit . interact(&explorer) ;

    if (pitInteraction) {
        cout << "Explorer fell into the pit, Stamina now is : " << explorer.getStamina() << endl ;
    } else {
        cout << "Explorer avoided the pit. Stamina now is : " << explorer.getStamina() << endl ;
    }

    explorer . move(2, 2) ;
    exitReached = exit . interact (&explorer) ;
    
    if (exitReached) {
        cout << "Explorer reaches the Exit :)" << endl ;
    } else {
        cout << "Explorer did not reach the Exit :(" << endl ;
    }

    return 0 ;
}
