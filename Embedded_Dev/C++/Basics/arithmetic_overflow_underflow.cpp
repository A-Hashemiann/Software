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

// function to check for overflow during subtraction
bool checkOverflowSub(int a, int b) {
    if (a > 0 && b < numeric_limits<int>::min() + a) {
        return true; // underflow will occur
    }
    if (a < 0 && b > numeric_limits<int>::max() + a) {
        return true; // overflow will occur
    }
    return false; // no overflow or underflow
}



int main() {

  int a,b;
    cout<< "Enter value of a and b : "<<endl;
    cin>>a;
    cin>>b;
    cout<< a<<endl<<b <<endl;

    return 0;
}
