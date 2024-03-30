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
    
    cout << "The maximum limit of a long long is: " << numeric_limits<long long>::max() << endl;
    cout << "The minimum limit of a long long is: " << numeric_limits<long long>::min() << endl;
    cout << "The maximum limit of a long long is: " << numeric_limits<unsigned long long>::max() << endl;
    
    int bitsInChar = sizeof(char) * 8;
    cout << "The char data type contains " << bitsInChar << " bits" << endl;
    
    cout << "The maximum limit of a char is: " << numeric_limits<unsigned char>::max() << endl;

    return 0;
}
