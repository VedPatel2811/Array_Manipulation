#include <stdio.h>
#include "array.h"

void printArray(int rows, int columns, int array[rows][columns]){
    for (int r=0; r<rows; r++ ){
        for (int c=0; c<columns; c++){
            printf("%d ", array[r][c]);
        }
        printf("\n");
    }
}