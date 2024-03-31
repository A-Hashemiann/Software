#include <iostream>
#include <limits>
#include <string>

using namespace std;

// function to check if a value is within the limits of a given type
template <typename T>
bool isWithinLimits(const string& valueStr) {
    
    try {
        T value = static_cast<T>(stoll(valueStr)); 
        return value >= numeric_limits<T>::min() && value <= numeric_limits<T>::max();
    } catch (const out_of_range& e) {
       
        return false;
    }
}

int main() {
    string inputType;
    cout << "Enter the type of the number (int, long, float, double): ";
    cin >> inputType;

    string inputValue;
    cout << "Enter the number: ";
    cin >> inputValue;



    return 0;
}
