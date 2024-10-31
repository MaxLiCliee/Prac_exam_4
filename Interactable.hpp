#ifndef INTERACTABLE_HPP
#define INTERACTABLE_HPP

#include "GridItem.hpp"

enum InteractableType {
    EXIT,
    PIT
};

class Interactable : public GridItem {
private:
    static int activeCount ;

public:
    Interactable () : GridItem () {
        activeCount ++;
    }

    Interactable (int x, int y, int width, int height) : GridItem(x, y, width, height) {
        activeCount++ ;
    }

    virtual bool interact (class Explorer* player) = 0 ;

    virtual InteractableType getType () = 0 ;

    static int getActiveInteractableCount () {
        return activeCount ;
    }

    virtual Interactable () {
        activeCount-- ;
    }
};

int Interactable::activeCount = 0 ;

#endif