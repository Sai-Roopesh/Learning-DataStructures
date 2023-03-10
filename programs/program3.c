/* 1.  Design,  Develop  and  Implement  a  menu  driven  Program  in  C  for  the  following 
operations on STACK of Integers (Array Implementation of Stack with maximum size 
MAX)  a. Push an Element on to Stack  b. Pop an Element from Stack  c. Demonstrate Overflow and Underflow situations on Stack  d. Display the status of Stack  e. Exit Support the program with appropriate functions for each of the above 
operations  */


#include<stdio.h>
#include<stdlib.h>



//declaring global variables
int stack[10];
int item; 
int ch, top=-1, count=0;
int MAX = 10;

//pushing an element into the stack
void push(){

    if(top == MAX - 1){

        printf("stack overflow");
    }
    else{

        printf("enter the element to be pushed");
        scanf("%d",&item);

        top++;
        stack[top] = item;

    }
}

//popping an element from the stack

void pop(){

    if(top == -1){

        printf("stack underflow");

    }
    else{

        item = stack[top];
        top--;
        printf("the popped element is %d",item);
    }
}

//displaying the elements of the stack

void display(){

    if(top == -1){

        printf("stack is empty");
    }
    else{

        printf("the elements of the stack are");

        for(int i = top; i>=0;i--){

            printf("%d \t",stack[i]);
        }
    }
}

//main function using switch case inside a while loop

void main(){

    do{
       

        printf("1.push");
        printf("2.pop");
        printf("3.display");
        printf("4.exit");
1

         printf("enter your choice");
        scanf("%d",&ch);

        switch(ch){

            case 1: push();
                    break;

            case 2: pop();
                    break;

            case 3: display();
                    break;

            case 4: exit(0);
                    break;

            default: printf("invalid choice");
        }
    } while(ch!=4);
}

