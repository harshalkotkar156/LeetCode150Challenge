#include<bits/stdc++.h>
using namespace std;
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
    int t = 25;
    while(curr!=NULL and t--){
        cout<<curr->data<<" ";
        curr=curr->next;
    }
    cout<<endl;
}

bool isLoop(Node *head)
{
    if(head==NULL){
        return false;
    }
    ListNode*slow=head;
    ListNode*fast=head;
    if(head->next==NULL){
        return false;
    }
    if(head->next==head){
        return true;
    }
    if(fast->next->next==NULL){
        return false;
    }
    slow=slow->next;
    fast=fast->next->next;
    while(fast!=NULL and fast->next!=NULL)
    {
        if(fast==slow){
            return true;
        }
        fast=fast->next->next;
        slow=slow->next;

    }
    return false;
}

Node*detectCycle(Node*head) {
    if(head==NULL or head->next == NULL)
    {
        return NULL;
    }

    if(!isLoop(head)){
        return NULL;
    }

    Node*slow = head->next;
    Node*fast = head->next->next;

    while(fast!=slow)
    {
        fast=fast->next->next ;
        slow = slow->next;
    }

    fast=head;
    while(slow!=fast)
    {
        slow=slow->next;
        fast = fast->next;
    
    }
    while(fast->next!=slow)
    {
        fast=fast->next;
    }
    fast->next=NULL;
    return head;


    





}


int main()
{
    Node *head= new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    head->next->next->next->next = new Node(5);
    head->next->next->next->next->next = new Node(6);
    head->next->next->next->next->next->next = head->next->next;
    print(head);
    if(isLoop(head)){
        cout<<"YES LOOP"<<endl;
    }else{
        cout<<"NO loop"<<endl;
    }
    head = detectCycle(head);
    print(head);
    return 0;
}
