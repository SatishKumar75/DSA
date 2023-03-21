// Program to find length of given linked list iteratively
#include<bits/stdc++.h>
using namespace std;

class node{
    public:
        int data;
        node * next;
        node(int da){
            data=da;
            next=NULL;
        }
};

node* take_input(){
    int data{};
    cin>>data;
    node* head=NULL;
    node* tail=NULL;
    while(data!=-1){
        node* newNode=new node(data);
        if(head==NULL){
            head=newNode;
            tail=newNode;
        }else{
            tail->next=newNode;
            tail=newNode;
        }
        cin>>data;
    }
    return head;
}

void print_li(node* head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<endl;
        temp=temp->next;
    }
}

int length(node* head){
    node* temp=head;
    int count{};
    while(temp!=NULL){
        ++count;
        temp=temp->next;
    }
    return count;
}
 
int main(){
  
  node * head=take_input();
  print_li(head);
  cout<<length(head)<<endl;
 return 0;
}