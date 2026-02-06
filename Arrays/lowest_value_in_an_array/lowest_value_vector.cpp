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


#include <iostream>
#include <vector>

using namespace std;

vector<int> myVector = {10, 69, 345, 664, 21, 634, 75, 754, 877, 234, 3};

int main() {
        int minValue = myVector.at(0);


    cout << "size of vector: " << myVector.size() << endl;

    for(int i = 0; i < myVector.size(); i++) {
        if(myVector[i] < minValue) {
            minValue = myVector[i];
        }
    }

    cout << "Lowest value in vector: " << minValue;

    return 0;
}

