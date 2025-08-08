#include<iostream>
using namespace std;
class solution{
      public:
      int armstrongnum(int num){
            //sum variable define
            int sum=0;
            //duplicate value assign
            int dpu=num;
            while(num>0){
                  //last digit dene ke liye
                  int lst_digit=num%10;//it gives the last digit
                  sum = sum+(lst_digit*lst_digit*lst_digit);
                  num/=10;//
            }
            if(dpu == sum){
                  cout<<"armstrong number..";
            }
            else{
                  cout<<"not armstrong number..";
            }


      }
};
int main(){
      solution s;
      int num;
      cout<<"Enter the number: ";
      cin>>num;
      s.armstrongnum(num);
      return 0;
}