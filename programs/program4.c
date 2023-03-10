/*  Solving Tower of Hanoi problem with n disks */

//using a recursive function

void towerOfHanoi(int n, int source, int temp,int destination){

    if(n == 0){
        return;
    }

        towerOfHanoi(n-1, source, destination, temp);
        printf("\nMove disc %d from %c to %c \n", n, source, destination);
        towerOfHanoi(n-1, temp, source, destination);

 
    
}

//main function which calls the recursive function with a menu driven program using a do while loop

int main(){

    int n;
    char choice;
    
    do{

        printf("enter the number of disks");
        scanf("%d",&n);

        towerOfHanoi(n, 'A', 'B', 'C');

        printf("do you want to continue? (y/n)");
        scanf("%c",&choice);

    }while(choice == 'y');

    return 0;
}

