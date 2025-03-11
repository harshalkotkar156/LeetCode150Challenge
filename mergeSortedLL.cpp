using namespace std;
#include<bits/stdc++.h>
struct Node{
    int data;
    Node *next;
    Node(int x){
        data=x;
        next=NULL;
    }

};
using ListNode = Node;
void print(Node*head){
    if(head==NULL)
    {
        cout<<"EMPTY!"<<endl;
        return;
    }
    Node*curr = head;
    while(curr!=NULL){
        cout<<curr->data<<" ";
        curr=curr->next;
    }
    cout<<endl;
}


Node*mergeLL(Node*h1,Node*h2){

    if(!h1 and !h2){
        return h1;
    }else if(!h1){
        return h2;
    }else if(!h2){
        return h1;
    }

    Node*curr1 = h1;
    Node*curr2 = h2;

    if(curr1->data > curr2->data){
        swap(curr1,curr2);
    }
    // print(curr1);
    // print(curr2);
    
    Node*curr = curr1;

    Node*tail = curr1;
    curr1 = curr1->next;
    // cout<<"h1"<<endl;
    // cout<<curr1->data<<endl;
    // cout<<tail->data<<endl;
    
    
    while(curr1!=NULL and curr2 != NULL)
    {
        // cout<<tail->data<<endl;
        if(curr1->data<=curr2->data){
            tail->next = curr1;
            curr1=curr1->next;
            tail=tail->next;
        }else{
            tail->next=curr2;
            tail=tail->next;
            curr2 = curr2->next;
        }
    }
    
    while(curr1!=NULL)
    {
        tail->next = curr1;
        curr1=curr1->next;
        tail=tail->next;
    }
    
    while(curr2!=NULL)
    {
        tail->next = curr2;
        tail=tail->next;
        curr2=curr2->next;
    }

    

    return curr;

}
int main()
{
    Node *head= new Node(1);
    // head->next = new Node(2);
    // head->next->next = new Node(4);//134
    Node *head1= new Node(1);
    head1->next = new Node(3);
    // head1->next->next = new Node(4);//134
    // print(head);
    // print(head1);

    head = mergeLL(head,head1);
    print(head);

    
    return 0;
}
