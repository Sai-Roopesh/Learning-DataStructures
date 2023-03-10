#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

//writing the program and function for singly linked list

//defining the structure of the node

struct node{
    int data;
    struct node *next;
};

//creating a head pointer and tail pointer along with temp pointer
struct node *head = NULL;
struct node *tail = NULL;
struct node *temp = NULL;


//create function for creating a node

struct node *create(){
    struct node *newnode;
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("enter the data");
    scanf("%d",&newnode->data);
    newnode->next = NULL;
    return newnode;
}

//insert function for inserting a node at the beginning of the list

void *insertAtBeggining(){

    if(head == NULL){
        head = create();
        tail = head;
    }
    else{
        struct node *newnode;
        newnode = create();
        newnode->next = head;
        head = newnode;
    }
}

//insert function for inserting a node at the end of the list

void insertAtEnd(){

    struct node *newnode = create();{

        if(head == NULL){
            head = newnode;
            tail = head;
        }
        else{
            tail->next = newnode;
            tail = newnode;
        }
}
}

//display function for displaying the list

void display(){

    temp = head;

    if(head == NULL){
        printf("list is empty");
    }
    else{
        while(temp != NULL){
            printf("%d",temp->data);
            temp = temp->next;
        }
    }
}

//delte function for deleting a node from the beginning of the list

void deleteAtBeggining(){

    temp = head;

    if(head == NULL){
        printf("list is empty");
    }
    else{
        printf("deleted element is %d",head->data);
        head = temp ->next;
        free(temp);
    }
}

//delete function for deleting a node from the end of the list only using temp

void deleteAtEnd(){

    temp = head;

    if(head == NULL){
        printf("list is empty");
    }
    else{
        while(temp->next != tail){
            temp = temp->next;
        }
        printf("deleted element is %d",tail->data);
        free(temp ->next);
        temp ->next = NULL;
        tail = temp;
       
    }
}
 
 //main function which is a menu driven program to access all functions using switch case

int main(){
    int choice;
    while(1){
        printf("1.insert at beggining");
        printf("2.insert at end");
        printf("3.delete at beggining");
        printf("4.delete at end");
        printf("5.display");
        printf("6.exit");

        printf("enter your choice");
        scanf("%d",&choice);

        switch(choice){
            case 1: insertAtBeggining();
                    break;
            case 2: insertAtEnd();
                    break;
            case 3: deleteAtBeggining();
                    break;
            case 4: deleteAtEnd();
                    break;
            case 5: display();
                    break;
            case 6: exit(0);
                    break;
            default: printf("invalid choice");
                    
           
        }
    }
}





