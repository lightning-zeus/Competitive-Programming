#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *next;
};
struct node* head;    


void isempty(struct node *head){
    
    if(head==0)
     printf("The linked list is empty\n");
    else
    printf("The linked list is not empty\n");
}
void getlength(struct node *temp){
   int length=0;
   if(temp==0){
       printf("0\n");
       return;
   }
   while(temp!=0){
       temp = temp->next;
       length++;
   }printf("The length of the linked list is %d",length);
}

void  printlist(struct node *temp){
    while(temp!=0){
        printf("%d ",temp->data);
        temp = temp->next;
    }

}
void lookup(int pos,struct node *temp){
    // to return the data of linked list at a certain position
    int count=1;
    if(temp==0)
      printf("The linked list is empty and there are no elements to look up.\n");
      else{
    while(count<pos){
         temp = temp->next;
         count++;
    }printf("The element at the specified position is %d\n", temp->data);
      }
}
void insert(struct node **head,int data,int pos){
      if(pos==1){
          struct node *s;
          s = (struct node*)malloc(sizeof(struct node));
          s->data = data;
          s->next = *head;
          *head = s;
      }
}



int main(){
    int n; // the total length of linked list
    scanf("%d",&n);
    struct node *temp, *s;
    if(n==0)
     head=0;
     //using the iterative approach to implement a sample linked list
   else
   { for (int i=1;i<=n;i++){
         s = (struct node*)malloc(sizeof(struct node));//reserving space for a node variable
         s->data = i; //inserting data into the linked list
         if(head==0)
           head = s; //pointing the global head pointer to the first node of the linked list
        else
        temp->next = s;

        temp = s;
    }temp->next = 0; //ending the linked list;
    temp = head;
   }int data = 21;
          s = (struct node*)malloc(sizeof(struct node));
          s->data = data;
          s->next = head;
          head = s;
   printlist(temp);
   
    
    

}