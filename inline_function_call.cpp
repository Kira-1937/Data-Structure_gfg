using namespace std;
#include<iostream>
inline int max(int a,int b){
    return (a>b)?a:b;
}
int main(){
    int x,y;
    cin>>x>>y;
    int c=max(x,y);
    cout<<"maximum of x and y is "<<c<<endl;
    return 0;
}