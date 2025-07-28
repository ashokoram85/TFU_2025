#include<iostream>
using namespace std;
void f(int arr[],int left,int right){
    if(left>=right) return;//base case
    //swap the elements at left and right indices
    swap(arr[left],arr[right]);//using swap function from STL
    //recursively call the function with updated indices
    f(arr,left+1,right-1);//again call the function with updated indices
}
int main(){
      int n;
      cout<< "Enter the size of the array: ";
      cin>>n;
      int arr[n];
      cout<< "Enter the elements of the array: ";
      for(int i=0;i<n;i++){
          cin>>arr[i];
      }
      f(arr,0,n-1);
      cout<< "Reversed array: ";
      for(int i=0;i<n;i++){
          cout<<arr[i]<<" ";
      }
      cout << endl;
      return 0;
}