#include <iostream>
#include <limits>
using namespace std;

// function to check for overflow during addition
bool checkOverflowAdd(int a, int b) {
    if (a > 0 && b > numeric_limits<int>::max() - a) {
        return true; // overflow will occur
    }
    if (a < 0 && b < numeric_limits<int>::min() - a) {
        return true; // underflow will occur
    }
    return false; // no overflow or underflow
}



int main() {

 

    return 0;
}
