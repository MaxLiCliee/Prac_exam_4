#ifndef EXPLORER_HPP
#define EXPLORER_HPP
#include "Interactable.hpp"

class Explorer : public GridItem {
private:
    int stamina ;

public:
    Explorer(int gridWidth, int gridHeight) : GridItem(0, 0, gridWidth, gridHeight), stamina(2) {}

    int getStamina() {
        return stamina ;
    }

    void jumpPit() {
        if (stamina > 0) {
            stamina -- ;
        }
    }

    bool move(int xOffset, int yOffset) {
        if ((xOffset != 0 && yOffset != 0) || (xOffset == 0 && yOffset == 0)) {
            return false ;
        }
        
        int newX = getCoordinates().first + xOffset ;
        int newY = getCoordinates().second + yOffset ;

        if (newX >= 0 && newX < getGridWidth() && newY >= 0 && newY < getGridHeight()) {
            setCoordinates(newX, newY) ;
            return true ;
        }
        return false ;
    }
} ;

#endif