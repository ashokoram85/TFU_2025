#include <iostream>
using namespace std;
class Solution {
public:
    int armstrongofNumber(int n){
      int sum =0;
      int dpu = n; // Store the original number for comparison
      while(n>0){
            int last_digit = n % 10;
            sum = sum+(last_digit * last_digit * last_digit);
            n = n / 10;
      }
      if(sum == dpu) {
          cout<<"armstrong";// Return the original number if it is an Armstrong number
      } else {
          cout<<"NOT"; // Return -1 if it is not an Armstrong number
    }
}
};
int main(){
      Solution sol;
      int number;
      cout<<"Enter the number: ";
      cin>>number; // Example input
      int reversed = sol.armstrongofNumber(number);
}