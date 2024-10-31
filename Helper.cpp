#ifndef HELPER_HPP
#define HELPER_HPP

#include <tuple>
#include <cmath>

using namespace std ;

class Helper {
public:
    static double absoluteSquaredDistance (tuple <int, int> item1, tuple <int, int> item2) {
        int dx = get <0> (item1) - get <0> (item2);
        int dy = get <1> (item1) - get <1> (item2);
        return (dx * dx) + (dy * dy);
    }
};

#endif 