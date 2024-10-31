#ifndef GRIDITEM_HPP
#define GRIDITEM_HPP

#include <tuple>

using namespace std ;

class GridItem {
private:
    int x , y ;
    int width , height ;
    static int activeCount ;

public:
    GridItem () : x(0), y(0), width(0), height(0) {
        activeCount ++ ;
    }

    GridItem (int x, int y, int width, int height) 
        : x(x), y(y), width(width), height(height) {
        activeCount ++ ;
    }

    void setCoordinates (int x, int y) {
        this -> x = x ;
        this -> y = y ;
    }

    tuple<int, int> getCoordinates () {
        return make_tuple(x, y) ;
    }

    int getGridWidth () {
        return width ;
    }

    int getGridHeight () {
        return height ;
    }

    static int getActiveGridItemCount () {
        return activeCount ;
    }

    virtual ~GridItem () {
        activeCount -- ;
    }
};
int GridItem :: activeCount = 0 ;

#endif 