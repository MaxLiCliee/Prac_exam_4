#include <iostream>
#include "GridItem.hpp"
#include "Helper.hpp"

using namespace std ;

int main () {
    GridItem item1 ;
    GridItem item2 (1, 2, 3, 4) ;


    cout << "Active GridItem count is " << GridItem :: getActiveGridItemCount() << endl;
    
    auto coords1 = item1.getCoordinates();
    auto coords2 = item2.getCoordinates();
    
    cout << "Item1 Coordinates is  (" << get <0> (coords1) << ", " << get <1> (coords1) << ")" << endl;
    cout << "Item2 Coordinates is  (" << get <0> (coords2) << ", " << get <1> (coords2) << ")" << endl;

   
    double distanceSquared = Helper :: absoluteSquaredDistance(coords1, coords2);
    cout << "The distance between item1 and item2 is " << distanceSquared << endl;

    return 0;
}
