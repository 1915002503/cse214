/* Define a "Back" function to display the first element of the Linked List.*/

#include<stdio.h>
#include<stdlib.h>
typedef struct Node node;
struct Node{
  int data;
  node *next;
};
void back(node *temp);
void print_list(node *temp);
int is_empty(node *temp);
node *create_list();
int main(){
    node *head = NULL;

    head = create_list();

    if(is_empty(head) == 1){
       printf("\n!!Linked List is Empty!!\n");
     }

    else if(is_empty(head) == 0){
       print_list(head);
       back(head);
     }


    return 0;
}

node* create_list(){

node *a,*b,*c,*d;
node *head;

a=(node*)malloc(sizeof(node));
b=(node*)malloc(sizeof(node));
c=(node*)malloc(sizeof(node));
d=(node*)malloc(sizeof(node));

head=a;

a->data=1;
a->next=b;
b->data=2;
b->next=c;
c->data=3;
c->next=d;
d->data=4;
d->next=NULL;

return a;
}

void print_list(node *temp){
   while(temp)
    {
      printf("%d ",temp->data);
      temp = temp->next;
    }
   printf("\n");
 }

void back(node *temp){
    while(temp->next)
    {
      temp = temp->next;
    }
    printf("\nBack Element : %d\n",temp->data);
 }

int is_empty(node *temp){
   if(temp == NULL){
      return 1;
    }
    return 0;
 }

