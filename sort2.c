#include <stdio.h>
#include "array.h"

void sort2(int rows, int columns, int array[rows][columns]){
int temp;

for (int r=0; r<rows; r++){
    for (int c=0; c<columns; c++){
        int max=array[r][c];
        for (int c2=0; c2<columns; c2++){
            if (array[r][c2]>max){
                max=array[r][c];
                temp=array[r][c];
                array[r][c]=array[r][c2];
                array[r][c2]=temp;
            }
        }
    }
}

for (int r=0; r<rows; r++){
    for (int c=0; c<columns; c++){
        printf("%d ",array[r][c]);
    }
    printf("\n");
}


}