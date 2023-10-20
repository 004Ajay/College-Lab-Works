//C program to implement operations on LinkedList

#include <stdio.h>
#include<stdlib.h>

struct node{
int val;
struct node *link;
};

struct node*head;int value;

void Insert_Begin(){

  struct node *ptr = (struct node*)malloc(sizeof(struct node));
  struct node *temp = (struct node*)malloc(sizeof(struct node));

  printf("Enter the element to insert: ");
  scanf("%d",&value);

  temp->val = value;
  temp->link = head;
  head = temp;
}

void Insert_End(){

    struct node *ptr = (struct node*)malloc(sizeof(struct node));
    struct node *temp = (struct node*)malloc(sizeof(struct node));

    printf("Enter the element to insert: ");
    scanf("%d",&value);

    ptr=head;

    while(ptr->link!=NULL) ptr=ptr->link;

    ptr->link = temp;
    temp->val = value;
    temp->link = NULL;
}

void Insert_AnyPos(){

    int key;

    struct node *ptr = (struct node*)malloc(sizeof(struct node));
    struct node *temp = (struct node*)malloc(sizeof(struct node));

    printf("Enter the element to insert: ");
    scanf("%d", &value);

    printf("Enter position: ");
    scanf("%d", &key);

    ptr = head;

    while((ptr->val != key) && (ptr->link != NULL)) ptr=ptr->link;

    if(ptr->val == key){
        temp->link = ptr->link;
        ptr->link = temp;
        temp->val = value;
      }

    else printf("Value not found\n");
}

void Delete_Begin(){

    struct node *ptr = (struct node*)malloc(sizeof(struct node));

    ptr = head;
    head = ptr->link;
    free(ptr);

}

void Delete_End(){

    struct node *ptr = (struct node*)malloc(sizeof(struct node));
    struct node *temp = (struct node*)malloc(sizeof(struct node));

    if(head == NULL) printf("\nMemory Underflow\n");
    else{
        ptr = head;
        while(ptr->link != NULL){
          temp = ptr;
          ptr = ptr->link;
        }
        temp->link = NULL;
        free(ptr);
    }
}

void Delete_AnyPos(){

    int key;

    struct node *ptr = (struct node*)malloc(sizeof(struct node));
    struct node *temp = (struct node*)malloc(sizeof(struct node));

    printf("Enter position: ");
    scanf("%d",&key);

    ptr=head;

    if(head == NULL) printf("\nMemory Underflow\n");
    while(ptr!=NULL){
        temp=ptr;
        ptr=ptr->link;
        if(temp->val==key){
          temp->link=ptr->link;
          free(ptr);
          break;
          }
    }
}

void Insertion(){
   int s;

   struct node *ptr = (struct node*)malloc(sizeof(struct node));

    
   if(ptr == NULL) printf("\nMemory Overflow\n");

   else{
        printf("\nSelect Position\n1: Front\n2: End\n3: Between Nodes\nChoice: ");
        scanf("%d", &s);
        switch(s){
          case 1:
                 Insert_Begin();
                 break;
          case 2:
                 Insert_End();
                 break;
          case 3:
                 Insert_AnyPos();
                 break;
          default:printf("Wrong Input\n");
        }
    }
}

void Deletion(){

    int key, s=1;

    struct node *temp = (struct node*)malloc(sizeof(struct node));
    struct node *ptr = (struct node*)malloc(sizeof(struct node));

    if(head== NULL) printf("\nunderflow\n");
    
    else{
        printf("\nSelect Position\n1: Front\n2: End\n3: Between Nodes\nChoice: ");
        scanf("%d", &s);

        switch(s){
          case 1:
                 Delete_Begin();
                 break;
          case 2:
                 Delete_End();
                 break;
          case 3:
                 Delete_AnyPos();
                 break;
          default:printf("Wrong Input\n");
        }
        }
}

void Display(){

    struct node *ptr= (struct node*)malloc(sizeof(struct node));

    ptr=head;

    if(head!=NULL){
     printf("\nList Elements: ");
    
     while(ptr != NULL){
        if(ptr->link == NULL){
          printf("%d ", ptr->val);
          break;
        }
        printf("%d ", ptr->val);
        ptr=ptr->link;
       }
     printf("\n");
    }

   else printf("List is empty\n");
}


int main(){
  int s=0;
  char option;

  do{
     printf("\n1: Insertion\n2: Deletion\n3: Display\n4: Exit\nChoice: ");
     scanf("%d", &s);
     switch(s){
        case 1:
              Insertion();
              break;

        case 2:
              Deletion();
              break;

        case 3:
              Display();
              break;

        case 4:
              printf("Exited!");
              exit(0);

        default: printf("Wrong Choice!");
                 break;       
      }
printf("\nDo you want to continue? y/n\nChoice: ");
scanf(" %c", &option);
}while(option == 'Y' || option == 'y');
printf("Exited!");  
exit(0);
return 0;
}