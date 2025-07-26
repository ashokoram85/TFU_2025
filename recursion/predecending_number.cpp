#include <iostream>
using namespace std;

void printDescending(int n) {
    if (n == 0) return;  // base case: stop when n reaches 0
    cout << n << endl;   // print current number
    printDescending(n - 1); // recursive call with n-1
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    printDescending(n);
    return 0;
}
