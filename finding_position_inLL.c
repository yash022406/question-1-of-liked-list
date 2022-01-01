//  finding the length of a linked list

#include<stdio.h>
#include<stdlib.h>
struct node {
    int data;
    struct node * next;

};
struct node * head = NULL;
struct node * temp = NULL;
void add(){
    int data;
    printf("Enter the data: ");
    scanf("%d",&data);
    if(head == NULL){
        head = (struct node *)malloc(sizeof(struct node));
        temp = (struct node *)malloc(sizeof(struct node));
        head ->data= data;
        head -> next =NULL;
        temp = head;
    }
    else{
        struct node * new = (struct node *)malloc(sizeof(struct node));
        new -> data = data;
        new -> next = NULL;
        temp->next = new ;
        temp = new;


    }
}
void count(){
    struct node * temp1 = head;
    int i=0;
    while(temp1!=NULL){
        temp1 = temp1 ->next;
        i++;
    }
    printf("The length of this linked list is %d\n",i);
}
void posn(){

    // finding the position of a given element in the linked list
    struct node * temp1 = head;
    int data,i=0;
    printf("Enter thedata to find: ");
    scanf("%d",&data);
    while(temp1->data!=data){
        temp1 = temp1 -> next;
        i++;
    }
    printf("The element %d is at %d position.\n",data,i+1);


}
int main(){
    int n;
    
    while(n!=4){
        printf("1. Add data\n2. Find length\n3. Find position of element\n4. Exit\n");
        scanf("%d",&n);
        if(n==1){
            // adding the data 
            add();
        }
        else if (n==2){
            // counting the number of nodes
            count();

        }
        else if (n==3){
            posn();
        }
    }
}