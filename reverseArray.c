#include <stdio.h>
#include "array.h"

void reverseArray(int rows, int columns, int array[rows][columns]){

    int reverse[rows][columns];

    int i=0;
    for (int r=(rows-1); r>=0; r--){
        int j=0;
        for (int c=(columns-1); c>=0; c--){
            reverse[i][j]=array[r][c];
            j++;
        }
        i++;
    }


    for (int r=(rows-1); r>=0; r--){
        for (int c=(columns-1); c>=0; c--){
            array[r][c]=reverse[r][c];
        }
    }

    for (int r=0; r<rows; r++){
        for (int c=0; c<columns; c++){
            printf("%d ", array[r][c]);
        }
        printf("\n");
    }
}
