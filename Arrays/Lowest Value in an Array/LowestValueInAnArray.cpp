// Steps

// 1. Create a variable "minValue" and set it equal to the first value of the array
// 2. Go through every element in the array
// 3. If the current element we are looking at is lower than "minValue", update the "minValue" variable
// 4. After looking at all elements in the array, "minValue" will be the lowest value in the array



// Another way (pseudocode):

// Variable "minValue" = array[0]
// For each element in the array
    // If current element < "minValue"
    // "minValue" = current element


#include <stdio.h>
#include <iostream>
using namespace std;

int myArray[] = {12, 9, 3, 6, 8, 10, 2, 26, 1};

int main() {
    
    int sizeOfArray = sizeof(myArray) / sizeof(myArray[0]);
    int minValue = myArray[0];

    for(int i = 0; i < sizeOfArray; i++) {
        if(myArray[i] < minValue) {
            minValue = myArray[i];
        }
    }

    cout << "Size of array: " << sizeOfArray << endl;
    cout << "Lowest value: " << minValue;

    return 0;
}

