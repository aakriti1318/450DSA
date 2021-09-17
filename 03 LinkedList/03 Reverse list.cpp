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

void fun(node *head) {
    node *next = NULL, *curr = head, *prev = NULL;
    while(curr!=NULL){
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
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
    //node *result = fun(head);
    fun(head);
    print(head);
    cout<<endl;
    return 0;
}


