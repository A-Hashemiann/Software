#include <iostream>
#include <limits> 
using namespace std;

int main() {
    
    cout << "The upper limit of an int is: " << numeric_limits<int>::max() << endl;
    cout << "The lower limit of an int is: " << numeric_limits<int>::min() << endl;
    cout << "The upper limit of an unsigned int is: " << numeric_limits<unsigned int>::max() << endl;
    
    int a = 2147483647;
    int b = 2147483648;
    
    cout<<a<<endl;
    cout<<b<<endl;
    cout<<a+b<<endl;

    return 0;
}
