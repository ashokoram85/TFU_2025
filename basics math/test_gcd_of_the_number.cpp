#include<iostream>
using namespace std;
class Solution {
public:
      int gcd(int a, int b) {
            while (b != 0) {
                  int temp = b;
                  b = a % b; // Reduce b
                  a = temp; // Update a
            }
            return a; // Return GCD when b becomes 0
      }
      };
      int main() {
            Solution sol;
            int a, b;
            cout << "Enter two numbers: ";
            cin >> a >> b; // Example input
            int result = sol.gcd(a, b); // Call the gcd function
            cout << "GCD is: " << result << endl; // Output GCD
            return 0;
      }