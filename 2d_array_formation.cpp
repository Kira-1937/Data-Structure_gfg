using namespace std;
#include<iostream>
int main(){
    int n,m;
    cin>>n>>m;
    int** arr= new int*[m];
    for(int i=0;i<m;i++){
        arr[i]=new int[n];
        for(int j=0;j<n;j++){
        cin>>arr[i][j];
    }
    }
    
cout<<arr[2][2]+arr[1][2];
return 0;
}