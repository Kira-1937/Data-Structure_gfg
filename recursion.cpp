using namespace std;
#include<iostream>
int degreeproduct(int a,int b){
    if (b==0){
        return 1;
    }
    return a*degreeproduct(a,b-1);
}
int main(){
    int x,y;
    cin>>x>>y;
    cout<<"x ki power y= "<<degreeproduct(x,y);
    
    return 0;
}