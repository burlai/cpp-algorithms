// Steps

// 1. Create two loops - one "outer" loop which will control how much times the inner loop will run;
// 2. And another one - "inner" loop which will be iterating through the elements and making a check if current element (myVector[j]) is bigger then the next element to the right;
// 3. If the current element is bigger, then we will flip them - current element move the right (bubble up), and next element, which is smaller, moves at its place. So they are "swapping" places.
// 4. The outer loop should run 1 time less than number of element in vector. Why so? Because each time we are comparing two numbers - two elements of the array. Each time it's a pair we are working with, not single number. So we can treat each time the outer loop is running, as number of "pairs of numbers to compare".
// 5. The inner loop on each run will run one time less, because with each run the current number will became sorted. So - for outer loop number of runs will be "size - 1", and for inner loop - "size - i - 1" (i is number of times the outer loop already ran).


#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> myVector = {4, 3, 5, 6};

    for (int i = 0; i < myVector.size() - 1; i++) {
        cout << i << ": " << myVector[i] << endl;

        for (int j = 0; j < myVector.size() - i - 1; j++) {

            cout << "   Inner loop: " << j << ": " << myVector[j] << endl;

            if (myVector[j] > myVector[j+1]) {
                int elementToSwap = myVector[j]; // temporary variable which will hold the value of the element which will be moved to the right (bubbled)

                cout << "      Element to swap: " << elementToSwap << endl;

                myVector[j] = myVector[j+1]; // moving the smaller element which was on the right to the left
                myVector[j+1] = elementToSwap; // asigning the value of the temporary variable to the element in the vector which is one step to the right
            }
        }
    }

    cout << "------------------" << endl;
    cout << "Sorted vector: ";
    for (int i = 0; i < myVector.size(); i++) {
        cout << myVector[i] << " ";
    }

    return 0;
}