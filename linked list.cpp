// A simple CPP program to introduce 
// a linked list 
#include <bits/stdc++.h> 
using namespace std; 
class Node { 
public: 
    int data; 
    Node* next; 
};

void insertAfter(Node* prev_node, int new_data)  
{  
    /*1. check if the given prev_node is NULL */
    if (prev_node == NULL)  
    {  
        cout<<"the given previous node cannot be NULL";  
        return;  
    }  
  
    /* 2. allocate new node */
    Node* new_node = new Node(); 
  
    /* 3. put in the data */
    new_node->data = new_data;  
  
    /* 4. Make next of new node as next of prev_node */
    new_node->next = prev_node->next;  
  
    /* 5. move the next of prev_node as new_node */
    prev_node->next = new_node;  
}
void printList(Node* n) 
{ 
    while (n != NULL) { 
        cout << n->data << " "; 
        n = n->next; 
    } 
} 

  

  
// Program to create a simple linked 
// list with 3 nodes 
int main() 
{ 
    Node* head = NULL; 
    Node* second = NULL; 
    Node* third = NULL;
    Node*fourth = NULL;
    Node* fifth = NULL; 
  
    // allocate 5 nodes in the heap 
    head = new Node(); 
    second = new Node(); 
    third = new Node(); 
    fourth = new Node();
    fifth = new Node();
  
    
  
    head->data = 1; // assign data in first node 
    head->next = second; // Link first node with 
    // the second node 
  
    
    second->data = 2; 
  
    // Link second node with the third node 
    second->next = third; 
  
   
  
    third->data = 3; // assign data to third node 
    third->next = fourth; 
    fourth->data=4;
    fourth->next = fifth;
    fifth->data = 5;
    fifth->next = NULL;
    insertAfter(head->next,8);
    printList(head);
    return 0; 
} 
