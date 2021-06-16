using namespace std;
#include<iostream>

int main (){
    int* p=new int;
    /*similarly with
    double * d=new double;
    char * c=new char;*/
    *p=10;
    cout<<*p<<endl;
//--------------------------
//it is used for  when we have to take array value  during run time 
int n;
cin>>n;
int * arr=new int[n];
for (int i=0;i<n;i++){
    cin>>arr[i];
}
cout<<arr[0]+arr[1];
    return 0;

}