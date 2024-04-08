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

// function to check for overflow during multiplication
bool checkOverflowMul(int a, int b) {
    if (a > 0 && b > 0 && a > numeric_limits<int>::max() / b) {
        return true; // overflow will occur
    }
    if (a < 0 && b < 0 && a < numeric_limits<int>::min() / b) {
        return true; // overflow will occur
    }
    if (a > 0 && b < 0 && a < numeric_limits<int>::min() / b) {
        return true; // underflow will occur
    }
    if (a < 0 && b > 0 && a < numeric_limits<int>::max() / b) {
        return true; // underflow will occur
    }
    return false; // no overflow or underflow
}

// function to check for overflow during division
bool checkOverflowDiv(int a, int b) {
    if (b == 0) {
        return true; // division by zero is undefined behavior
    }
    if (a == numeric_limits<int>::min() && b == -1) {
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
    
    
    
     cout << "addition: ";
    if (checkOverflowAdd(a, b)) {
        cout << "overflow/underflow detected.\n";
    } else {
        cout << "no overflow/underflow.\n";
    }

    cout << "subtraction: ";
    if (checkOverflowSub(a, b)) {
        cout << "overflow/underflow detected.\n";
    } else {
        cout << "no overflow/underflow.\n";
    }

    cout << "multiplication: ";
    if (checkOverflowMul(a, b)) {
        cout << "overflow/underflow detected.\n";
    } else {
        cout << "No overflow/underflow.\n";
    }

    cout << "division: ";
    if (checkOverflowDiv(a, b)) {
        cout << "overflow/underflow detected.\n";
    } else {
        cout << "no overflow/underflow.\n";
    }

    return 0;
}
