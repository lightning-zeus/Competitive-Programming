#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *next,*prev;
};
struct node *head=0,*head1,*head2;    



void getlength(struct node *temp){
   int length=0;
   if(temp==0){
       printf("0\n");
       return;
   }
   while(temp!=0){
       temp = temp->next;
       length++;
   }printf("The length of the linked list is %d\n",length);
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
void concatenate(struct node **head1,struct node **head2){
       head = *head1;
       struct node *p= *head1;
       //traverse the first linked list uptill its last node. 
       while(p->next!=NULL){
           p = p->next;
       }p->next = *head2;
       (*head2)->prev = p;
       return;

}




int main(){
    int pos,val,n1,n2; // the total length of linked list
    printf("Input the lengths of two linked lists: ");
    scanf("%d %d",&n1,&n2);
    struct node *temp, *s;
     if(n1==0&&n2==0){
         printf("The linked lists are empty\n");
         return 0;
     }
   
     //using the iterative approach to implement a sample linked list
   else
   { for (int i=1;i<=n1;i++){
         s = (struct node*)malloc(sizeof(struct node));//reserving space for a node variable
         s->data = i; //inserting data into the linked list
         if(head1==0){
           head1 = s;
           s->prev = NULL;
           } //pointing the global head pointer to the first node of the linked list
        else{
        temp->next = s;
        s->prev = temp;
        }

        temp = s;
    }temp->next = 0; //ending the linked list;
    temp = head1;
    for (int i=1;i<=n2;i++){
         s = (struct node*)malloc(sizeof(struct node));//reserving space for a node variable
         s->data = i; //inserting data into the linked list
         if(head2==0){
           head2 = s; //pointing the global head pointer to the first node of the linked list
           s->prev = NULL;
         }
        else{
        temp->next = s;
        s->prev = temp;
        }

        temp = s;
    }temp->next = 0; //ending the linked list;
    temp = head2;
   }
   int i = 1;
    while (i) {
        int choice;
        printf("1 : concatenate; 2 : getLength; 3: printList; 0: exit\n");
        printf("Enter choice : ");
        scanf("%d", &i);
        
        switch (i){
            case 1:
                concatenate(&head1,&head2);
                printlist(head);
                break;
            case 2:
                getlength(head);
                break;
            case 3: 
                printlist(head);
                break;
            default:
                printf("Terminating....\n");                
        }
    }
   
    return 0;
    

}