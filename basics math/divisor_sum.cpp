#include <iostream>
using namespace std;
class Solution {
public:
    int divisor(int n){
      int sum=0;
      for(int i=1; i <= n; i++) {
          if(n % i == 0) {
              cout << i << " ";
              sum = sum+i; // Print the divisor
          }
      }
      cout << "\nSum of divisors: " << sum << endl; // Print the sum of divisors
    }
};
int main(){
      Solution sol;
      int number;
      cout<<"Enter the number: ";
      cin>>number; // Example input
      int reversed = sol.divisor(number);
}