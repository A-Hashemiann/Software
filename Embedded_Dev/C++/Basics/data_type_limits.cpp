#include <iostream>
#include <limits> 
using namespace std;

int main() {
    
    cout << "The upper limit of an int is: " << numeric_limits<int>::max() << endl;
    cout << "The lower limit of an int is: " << numeric_limits<int>::min() << endl;

    return 0;
}
