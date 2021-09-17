#include<bits/stdc++.h>
using namespace std;

struct node{
    int data; 
    struct node *next;
    node(int x){
        data = x;
        next = NULL;
    }
};

void print(node *head){
    while(head!=NULL){
        cout<<head->next<<"->";
        head = head->next;
    }
}

node *fun(node *head){
    node *curr = head;
    while(curr!=NULL and curr->next!=NULL){
        node *temp = curr->next;
        curr->next = curr->next->next;
        delete(temp);
    }
    return head;
}
int main(){
    int n; cin>>n;
    node *head = NULL;
    node *temp = head;
    for(int i=0;i<n;i++){
        int data; cin>>data;
        if(head == NULL)
            head = temp = new node(data);
        else{
            temp->next = new node(data);
            temp = temp->next;
        }
    } 
    node *result = fun(head);
    print(head);
    cout<<endl;
    return 0;
}