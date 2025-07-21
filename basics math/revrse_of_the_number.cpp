#include <iostream>
using namespace std;
class Solution {
public:
    int reverseNumber(int n) {
        int rev_no=0;
        while(n>0){
            int last_degit=n%10;
            rev_no=(rev_no*10)+last_degit;
            n = n/10;
        }
        return rev_no;

    }
};
int main(){
      Solution sol;
      int number;
      cout<<"Enter the number: ";
      cin>>number; // Example input
      int reversed = sol.reverseNumber(number);
      cout<<"The reverse number is: "<<reversed<<endl; // Output: 54321
      return 0;
}