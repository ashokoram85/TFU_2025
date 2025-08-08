#include<iostream>
using namespace std;
#include<algorithm>
int f(int number,int arr[],int n){
      int cnt =0;
      for(int i=0; i<n; i++){
            if(arr[i]==number){
                  cnt++;
            }
      }
      return cnt;
}
int main(){
      int n,number;
      cout<<"Enter the number of elements: ";
      cin>>n;
      int arr[n];
      for(int i=0; i<n; i++){
            cin>>arr[i];
      }
      cout<<"Enter the number to count: ";
      cin>>number;
      cout<<f(number, arr,n)<<endl;
      return 0;
}