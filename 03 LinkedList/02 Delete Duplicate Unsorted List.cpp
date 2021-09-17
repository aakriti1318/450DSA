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
    node *temp = head;
    while(temp!=NULL){
        cout<<temp->next<<"->";
        temp = temp->next;
    }
}

node *fun(node *head) {
    node *curr = head, *prev = NULL;
    map<int,int> m;
    m[curr->data] = 1;
    prev = curr;
    curr = curr->next;
    while(curr!=NULL){
        if(m[curr->data]){
            prev->next = curr->next;
            delete(curr);
        }
        else{
            m[curr->data] = 1;
            prev = curr;
        }
        curr = prev->next;
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


