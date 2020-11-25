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
   int length=1;
   if(temp==0){
       printf("0\n");
       return;
   }
   while(temp->next!=head){
       temp = temp->next;
       length++;
   }printf("The length of the linked list is %d\n",length);
}

void  printlist(struct node *temp){
    if(head==NULL){
        printf("The linked list is already empty.\n");
        return;
    }
    while(temp->next!=head){
        printf("%d ",temp->data);
        temp = temp->next;
    }printf("%d",temp->data);
    printf("\n");

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
void insert(struct node **head,int data,int pos,int length,struct node *last){
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
          last->next = *head;
          return;
      }if(pos>length){
          s->data = data;
          last->next = s;
          s->next = *head;
          return;
      }else{
          struct node *p = *head;
          for(int i=0;i<pos-2;i++){
             p = p->next;
          }s->data = data;
          s->next = p->next;
          p->next = s;
          return;
      }
}
void remove(struct node **head,int pos,int length,struct node *last){
    if(*head==NULL){
        printf("The linked list is already empty.\n");
        return;
    }
    if(pos==1){
        last->next = (*head)->next;
        free(*head);
        *head = last->next;
        return;
        
    }
     if(pos==length){
         struct node *p = *head;
         while((p->next)->next!=*head){
             p = p->next;
         }struct node *f = p->next;
         p->next = *head;
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
    int pos,val,n; // the total length of linked list
    printf("Input the lenght of the linked list: ");
    scanf("%d",&n);
    struct node *temp, *s,*last;
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
    }temp->next = head;
    last = temp; //ending the linked list;
    temp = head;
   }
   int i = 1;
    while (i) {
        int choice;
        printf("1 : insert; 2 : delete; 3 : getLength; 4 : isEmpty; 5: lookup; 6: printList; 0: exit\n");
        printf("Enter choice : ");
        scanf("%d", &i);
        
        switch (i) {
            case 1:
                printf("Enter index and data : ");
                scanf("%d %d", &pos, &val);
                insert(&head, val,pos,n,last);
                printlist(head);
                break;
            case 2:
                printf("Enter index to delete from : ");
                scanf("%d", &pos);
                remove(&head,pos,n,last);
                printlist(head);
                break;
            case 3:
                getlength(head);
                break;
            case 4:
                isempty(head);
                break;
            case 5:
                printf("Enter index to look up : ");
                scanf("%d",&pos);
                lookup(pos,head);
                break;
            case 6: 
                printlist(head);
                break;
            default:
                printf("Terminating....\n");                
        }
    }
   
    return 0;
    

}