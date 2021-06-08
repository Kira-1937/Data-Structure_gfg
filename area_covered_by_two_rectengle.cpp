//given that both rectangle in first quadrant 
using namespace std;
#include<iostream>
int area(int a1,int b1,int a2,int b2,int a3,int b3,int a4,int b4){
    int A1=(b2-b1)*(a2-a1);
    int A2=(b4-b3)*(a4-a3);
    int left=max(a1,a3);
    int right=min(a4,a2);
    int top=min(b2,b4);
    int bottom=max(b1,b3);
    int Aintr=0;
    if((top>bottom)&&(right>left)){
        Aintr=(top-bottom)*(right-left);
    }
    int Area=A1+A2-Aintr;
    
    return Area;
   

}
int main(){
    int x1,x2,x3,x4,y1,y2,y3,y4;
    cin>>x1>>y1>>x2>>y2>>x3>>y3>>x4>>y4;
    cout<<area(x1,y1,x2,y2,x3,y3,x4,y4);
    return 0;
}