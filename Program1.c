/* Design, Develop and Implement a menu driven Program in C for the following Array 
Operations  a.  Creating  an  Array  of  N  Integer  Elements  b.  Display  of  Array  Elements 
with  Suitable  Headings  c.  Exit.  Support  the  program  with  functions  for  each  of  the 
above operations.*/




#include<stdio.h>
#include<stdlib.h>

//global variable declaration
int arr[100],n,elem,i,pos;

//creating an array of N integer elements
void create(){

    printf("enter the size of the array");
    scanf("%d",&n);

    arr[n];

    printf("enter the elements of the array");

    for(int i = 0;i < n;i++){

        scanf("%d",&arr[i]);

    }
}

//displaying the array elements

void display(){

    printf("the elements of the array are");

    for(int i = 0;i < n;i++){

        printf("%d \t",arr[i]);

    }
}

//main function using switch case

int main(){

    int choice;

    do{

        printf("------------");
        printf("1.create");
        printf("2.display");
        printf("3.exit");
        printf("------------");

        printf("Enter choice");
        scanf("%d",&choice);

        //writing switch case

        switch(choice){

            case 1:
                create();
                break;

            case 2:
                display();
                break;

            case 3:
                exit(0);
                break;

            default:
                printf("invalid choice");
                break;

        }
    } while(choice <3 );
}