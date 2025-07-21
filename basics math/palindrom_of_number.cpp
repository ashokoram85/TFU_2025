#include <iostream>
using namespace std;
class Solution {
public:
    int reverseNumber(int n) {
        int rev_no=0,dup=n;
        while(n>0){
            int last_degit=n%10;
            rev_no=(rev_no*10)+last_degit;
            n = n/10;
        }
        if(rev_no ==dup) cout<<"True ";

        else
            cout<<"False ";
      

    }
};
int main(){
      Solution sol;
      int number;
      cout<<"Enter the number: ";
      cin>>number; // Example input
      int reversed = sol.reverseNumber(number);
      return 0;
}