#include <iostream>
using namespace std;

int count = 2;

void fibonacci(int prev1, int prev2) {
    if (count <= 19) {
        int newFibo = prev1 + prev2;
        // printf("%d\n", newFibo);
        cout << " | " << newFibo;
        prev2 = prev1;
        prev1 = newFibo;
        count += 1;
        fibonacci(prev1, prev2);
    } else {
        return;
    }
}

int main() {
    fibonacci(1, 0);

    return 0;
}