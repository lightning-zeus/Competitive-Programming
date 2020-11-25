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
    if(head==NULL){
        printf("The linked list is already empty.\n");
        return;
    }
    while(temp!=0){
        printf("%d ",temp->data);
        temp = temp->next;
    }printf("\n");

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
void insert(struct node **head,int data,int pos,int length){
    if(*head==NULL){
        printf("The linked list is already empty.\n");
        return;
    }
     struct node *s;
         s = (struct node*)malloc(sizeof(struct node));
      if(pos==1){
         
          s->data = data;
          s->next = *head;
          *head = s;
          return;
      }if(pos==length){
          struct node *p = *head;
          while(p->next!=0){
              p = p->next;
          }  s->data = data;
          p->next = s;
          s->next = NULL;
          return;
      }else{
          struct node *p = *head;
          for(int i=0;i<pos-1;i++){
             p = p->next;
          }s->data = data;
          s->next = p->next;
          p->next = s;
          return;
      }
}
void remove(struct node **head,int pos,int length){
    if(*head==NULL){
        printf("The linked list is already empty.\n");
        return;
    }
    if(pos==1){
        struct node *p = *head;
        *head = p->next;
        free(p);
    }
     if(pos==length){
         struct node *p = *head;
         while((p->next)->next!=NULL){
             p = p->next;
         }struct node *f = p->next;
         p->next = 0;
         free(f);
     }else{
         struct node *prev=0,*curr= *head;
         for(int i=0;i<pos-1;i++){
             prev = curr;
             curr = curr->next;
         }prev->next = curr->next;
         free(curr);
     }
}



int main(){
    int pos,val,choice,n; // the total length of linked list
    printf("Input the lenght of the linked list: ");
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
   }printf("Input your choice:\n");
   printf("1.WHAT IS THE LENGTH OF THE LINKED LIST?\n");
   printf("2.IS THE LINKED LIST EMPTY?\n");
   printf("3.Insert an element in the linked list\n");
   printf("4.Delete an element from the linked list.\n");
   printf("5.Print the linked list.\n");
   scanf("%d\n",&choice);
   switch(choice){
       case 1: getlength(head);
               break;
       case 2: isempty(head);
                break;
       case 3: printf("Input the value and position at which you want to add the new element\n");
               scanf("%d %d",&pos,&val);
               insert(&head,val,pos,n);
               break;
       case 4: printf("Input the position at which you want to delete the element from the linked list\n");
               scanf("%d",pos);
               remove(&head,pos,n);
               break;
        case 5: printlist(head);
                break;
   }
   
    return 0;
    

}