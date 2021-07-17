#include<bits/stdc++.h>
using namespace std;
class Stack{
    private:
    int *data;
    int nextindex;
    int capacity;
    public:
    Stack(int totalsize){
        data=new int [totalsize];
    nextindex =0;
    capacity =totalsize;
    }
    int size(){
        return nextindex;
    }
    bool isempty( ){
        if( nextindex==0){
            return true;
        }
        else{return false;}
    }
   void push( int element ){
        if(capacity ==nextindex){
            cout<<"stack is full"<<endl;
        }
        data[nextindex]=element ;
        nextindex++;
    }
    void pop(){
        if(nextindex==0){
            cout<<"stack is already empty"<<endl;
        }
        nextindex--;
    }
    int top(){
        if(nextindex==0){
            cout<<"stack is empty"<<endl;
           
        }
         return data[nextindex-1];
    }
};
int main(){
Stack s(5);
cout<<s.isempty()<<endl;
s.push(10);
s.push(20);
s.push(30);
s.push(40);
s.push(50);
s.push(60);
cout<<s.isempty()<<endl;
s.pop();
s.pop();
s.pop();
cout<<s.top()<<endl;
cout<<s.size()<<endl;
return 0;

}