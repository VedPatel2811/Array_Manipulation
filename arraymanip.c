#include <stdio.h>
#include <stdbool.h>
#include "array.h"


int main(){
    int rows, columns;

    printf("Enter the row size of 2D array: \n");
    scanf("%d", &rows);
    printf("Enter the column size of 2D array: \n");
    scanf("%d", &columns);
    printf("Enter %d numbers (space separated): \n",(rows*columns));
    
    int array[rows][columns];
    for (int r=0; r<rows; r++ ){
        for (int c=0; c<columns; c++){
            scanf("%d", &array[r][c]);
        }
    }

    while (true){
        int choice=-1;
        printf("Choose an operation: \n");
        printf("(0) : exit\n");
        printf("(1) : reverse array\n");
        printf("(2) : randomize array\n");
        printf("(3) : sort array\n");
        printf("(4) : print array\n");
        scanf("%d", &choice);
        

        switch (choice){ //switch case 
        case 0:
            return 0;
        break;

        case 1:
            reverseArray(rows, columns, array);
            printf("\n");
        break;

        case 2: 
            randomArray(rows,columns,array);
            printf("\n");
        break;

        case 3:  
            sort2(rows, columns, array);
            printf("\n");
        break;
        
        case 4:
            printArray(rows, columns, array);
            printf("\n");
        break;
        default:
        break;
        }
    }
    printArray(rows, columns, array);
}
