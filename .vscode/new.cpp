//Given a sorted and rotated array, find if there is a pair with a given sum
using namespace std;
#include<iostream>
int main(){
    int arr[]={13,24,46,54,76,12};
    for ( int i=0;i<6;i++){
    for( int j=1;j<6;j++){
    if( (arr[i]+arr[j])==130){
    cout<<"true"<<endl;
    }
         else {
    cout<<"false"<<endl;
                }   }
            
        }
        
    

    return 0;
}