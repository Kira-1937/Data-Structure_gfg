//Find maximum value of Sum( i*arr[i]) with only rotations on given array allowed
using namespace std;
#include<iostream>
int product(int arr[],int n){

	  
        cout<< (n-1)*arr[n-1] +product(arr,n-1);
    return 0;
}
int sumproduct(int arr[],int n){
    int p=arr[0];
    
    for(int i=0;i<n;i++){
        arr[i]=arr[i+1];
    }
    arr[n-1]=p;
   cout<<product(arr,n);
}
int main(){
    int arr[] = {1, 20, 2, 10};
    int n=4;
    cout<<"vikram";
    
    cout<<sumproduct(arr,4);
    return 0;
}