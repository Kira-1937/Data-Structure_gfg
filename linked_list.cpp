using namespace std;
#include<bits/stdc++.h>
class Node{
    public:
    int data;
    Node *next; 
};
Node *takeinput(){
    int data;
    cin>>data;
    Node*head=NULL;
    while(data !=-1){
        Node *newNode=new Node();
        newNode->data=data;
        newNode->next=NULL;
        if(head ==NULL){
            head=newNode;
        }
        else{
            Node *temp=head;
            while(temp ->next!=NULL){
                temp=temp->next;
            }
            temp->next=newNode;
        }
        cin>>data;
    }
    return head;
}
void print (Node *head){
    while(head !=NULL){
        cout<<head->data<<" ";
        head=head->next;
    }
}
int main(){
    Node *head=takeinput();
    print(head);
    return 0;
}

