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
    
    bool isWithinLimit = false;
    if (inputType == "int") {
        isWithinLimit = isWithinLimits<int>(inputValue);
    } else if (inputType == "long") {
        isWithinLimit = isWithinLimits<long>(inputValue);
    } else if (inputType == "float") {
        isWithinLimit = isWithinLimits<float>(inputValue);
    } else if (inputType == "double") {
        isWithinLimit = isWithinLimits<double>(inputValue);
    } else {
        cout << "Invalid type. Please enter int, long, float, or double." << endl;
        return 1;
    }

    if (isWithinLimit) {
        cout << "The number is within the limits of the specified type." << endl;
    } else {
        cout << "The number is outside the limits of the specified type." << endl;
    }



    return 0;
}
