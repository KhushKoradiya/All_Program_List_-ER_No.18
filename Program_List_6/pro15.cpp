#include <iostream>
using namespace std;

inline int add(int a, int b) {
    return a + b;
}

int main() {
    int num1 = 5;
    int num2 = 10;

    int sum = add(num1, num2);

    cout << "Sum: " << sum << endl;

    return 0;
}

