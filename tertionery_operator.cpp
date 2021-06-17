using namespace std;
#include<iostream>
int main(){
    int a,b;
    cout<<"value of a and b is "<<endl;
    cin>>a>>b;
    // if else k buna ye use karo
    int max=(a>b)?a:b;
    int min=(a>b)?b:a;
cout<<"value of max and min "<<max<<", "<<min;
return 0;
}