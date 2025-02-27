#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node (int data){
        this->data=data;
        this->next=NULL;
    }
};
void circlelist(node* &tail,int element,int d){
    
    if(tail==NULL){
        node* newnode=new node(d);
           tail =newnode;
           newnode->next= newnode;
    }
    else{
       
        node* curr  =tail;
        while(curr->data!=element){
            curr=curr->next;
        } 
        node*  n=new node(d);
        n->next=curr->next;
        curr->next=n;
    }
}
void print(node* tail){
    node* temp=tail;
    do{
        cout<<tail->data<<" ";
        tail=tail->next;
    }
    while(tail!=temp);
    cout<<endl;
}

int main(){
node* tail=NULL;
circlelist(tail,5,3);
print(tail);
circlelist(tail,3,6);
print(tail);
circlelist(tail,6,7);
print(tail);
circlelist(tail,5,2);
print(tail);
circlelist(tail,2,8);
print(tail);
circlelist(tail,1,9);
print(tail);
}

