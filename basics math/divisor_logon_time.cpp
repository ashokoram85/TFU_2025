#include <iostream>
#include <cmath>
using namespace std;
class Solution {
public:
    int divisor(int n){
      for(int i=1; i <= sqrt(n); i++) {
          if(n % i == 0) {
              cout << i << " "; // Print the divisor
          }
      }
    }
};
int main(){
      Solution sol;
      int number;
      cout<<"Enter the number: ";
      cin>>number; // Example input
      int reversed = sol.divisor(number);
}