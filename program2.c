/* Design, Develop and Implement a menu driven Program in C for the following Array 
operations a. Inserting an Element (ELEM) at a given valid Position (POS) b. Deleting 
an Element at a given valid Position POS) c. Display of Array Elements d. Exit. Support 
the program with functions for each of the above operations. */

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

//inserting an element at a given valid position
void insert() {
    int i;
    printf("Enter the element to be inserted: ");
    scanf("%d", &elem);

    printf("Enter the position at which the element is to be inserted: ");
    scanf("%d", &pos);

    // Shift all elements after the given position to the right
    for (i = n-1; i >= pos-1; i--) {
        arr[i+1] = arr[i];
    }

    // Insert the element at the given position
    arr[pos-1] = elem;

    // Increase the size of the array
    n++;
}


//deleting an element at a given valid position

void delete(){

    printf("enter the position at which the element is to be deleted");
    scanf("%d",&pos);

    int deleted = arr[pos-1];

    for(i = pos-1; i<= n; i++){

        arr[i] = arr[i+1];
    }

    //printing the deleted elment;
    printf("the deleted element is %d",deleted);
}

//main function using switch case

int main(){

    int choice;

    do{

        printf("------------ \n");
        printf("1.create \n");
        printf("2.display \n");
        printf("3.insert \n");
        printf("4.delete \n");
        printf("5.exit \n");
        printf("------------ \n");

        printf("Enter choice \n");
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
                insert();
                break;

            case 4:
                delete();
                break;

            case 5:
                exit(0);
                break;

            default:
                printf("invalid choice");
                break;

        }
    } while(choice <5 );
}