#include <iostream>
using namespace std;
class Solution {
public:
    int reverseNumber(int n) {
        int cnt = 0;
        while(n>0){
            cnt++;
            n = n/10;
        }
        return cnt;

    }
};
int main(){
      Solution sol;
      int number;
      cout<<"Enter the number: ";
      cin>>number; // Example input
      int reversed = sol.reverseNumber(number);
      cout<<"The count number is: "<<reversed<<endl; // Output: 54321
      return 0;
}