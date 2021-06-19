using namespace std;
#include<iostream>
int addarray(int a[],int size){
    if(size==0){
        return 0;
    }
    return a[0]+addarray(a+1,size-1);
}
int main(){
    int n,i;
    cout<<"size of array=";
    cin>>n;
    int* array=new int[n];
    for(int i=0;i<n;i++){cin>>array[i];}
    cout<<addarray(array,n);
    return 0;
}