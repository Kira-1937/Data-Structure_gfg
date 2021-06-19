using namespace std;
#include<iostream>
bool sorted (int arr[],int size){
    if((size==0)||(size==1)){
        return true ;}
    if(arr[0]>arr[1]){
        return false ;}
 return  sorted(arr+1,size-1);
}
int main(){
    int n,i;
    cout<<"size of array=";
    cin>>n;
    int* array=new int[n];
    for(int i=0;i<n;i++){cin>>array[i];}
    cout<<sorted(array,n);
    return 0;
}