using namespace std;
#include<iostream>
 int print(int n){
    if(n==0){
        return  0;
    }
    int smallnumber=print(n-1);
    cout<<n<<endl;
    return smallnumber;
      
}
int main(){
    int a;
    cin>>a;
    cout<<print(a);
    return 0;

}