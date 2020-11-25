#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *next;
};
struct node* head;   
struct node* SortedMerge(struct node* a, struct node* b); 
void FrontBackSplit(struct node* source, 
                    struct node** frontRef, struct node** backRef); 
  
/* sorts the linked list by changing next pointers (not data) */
void MergeSort(struct node** headRef) 
{ 
    struct node* head = *headRef; 
    struct node* a; 
    struct node* b; 
  
    /* Base case -- length 0 or 1 */
    if ((head == NULL) || ((head)->next == NULL)) { 
        return; 
    } 
  
    /* Split head into 'a' and 'b' sublists */
    FrontBackSplit(head, &a, &b); 
  
    /* Recursively sort the sublists */
    MergeSort(&a); 
    MergeSort(&b); 
  
    /* answer = merge the two sorted lists together */
    *headRef = SortedMerge(a, b); 
} 
  
/* See https:// www.geeksforgeeks.org/?p=3622 for details of this  
function */
struct node* SortedMerge(struct node* a, struct node* b) 
{ 
    struct node* result = NULL; 
  
    /* Base cases */
    if (a == NULL) 
        return (b); 
    else if (b == NULL) 
        return (a); 
  
    /* Pick either a or b, and recur */
    if (a->data <= b->data) { 
        result = a; 
        result->next = SortedMerge(a->next, b); 
    } 
    else { 
        result = b; 
        result->next = SortedMerge(a, b->next); 
    } 
    return (result); 
} 
  
/* UTILITY FUNCTIONS */
/* Split the nodes of the given list into front and back halves, 
    and return the two lists using the reference parameters. 
    If the length is odd, the extra node should go in the front list. 
    Uses the fast/slow pointer strategy. */
void FrontBackSplit(struct node* source, 
                    struct node** frontRef, struct node** backRef) 
{ 
    struct node* fast; 
    struct node* slow; 
    slow = source; 
    fast = source->next; 
  
    /* Advance 'fast' two nodes, and advance 'slow' one node */
    while (fast != NULL) { 
        fast = fast->next; 
        if (fast != NULL) { 
            slow = slow->next; 
            fast = fast->next; 
        } 
    } 
  
    /* 'slow' is before the midpoint in the list, so split it in two 
    at that point. */
    *frontRef = source; 
    *backRef = slow->next; 
    slow->next = NULL; 
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
void insert(struct node **head,int val,int n){
    struct node *p = *head;
    struct node *s;
    struct node *f;
    f = (struct node *)malloc(sizeof(struct node));
    s->data = val;
    if(head==0){
        printf("The linked list is empty.\n");
    }if(val<(*head)->data){
         f->data = val;
         f->next = (*head)->next;
         *head = f;
         return;
    }
    else{
        while(p->data<val&&p->next!=0){
            if((p->next)->data>=val)
             break;
            p = p->next;
        }if(p->next==0){
            f->data = val;
            p->next = f;
            f->next = 0;
            return;
        }
        f->data = val;
        f->next = (p->next);
        p->next = f;
        return;
    }

}




int main(){
    int pos,val,n; // the total length of linked list
    printf("Input the lenght of the linked list: ");
    scanf("%d",&n);
    struct node *temp, *s;
     if(n==0)
     head=0;
     //using the iterative approach to implement a sample linked list
   else
   { for (int i=1;i<=n;i++){
         s = (struct node*)malloc(sizeof(struct node));//reserving space for a node variable
         scanf("%d",&s->data);//inserting data into the linked list
             
         if(head==0)
           head = s; //pointing the global head pointer to the first node of the linked list
        else
        temp->next = s;

        temp = s;
    }temp->next = 0; //ending the linked list;
    temp = head;
   }MergeSort(&head);
   printf("The sorted linked list is: \n");
   printlist(head);
   int i = 1;
    while (i) {
        int choice;
        printf("1 : insert; 2: lookup; 3: printList; 0: exit\n");
        printf("Enter choice : ");
        scanf("%d", &i);
        
        switch (i) {
            case 1:
                printf("Enter data : ");
                scanf("%d", &val);
                insert(&head, val,n);
                printlist(head);
                break;
            case 2:
                printf("Enter index to look up : ");
                scanf("%d",&pos);
                lookup(pos,head);
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
   