#include <stdio.h>
#include "array.h"

void sortArray(int rows, int columns, int array[rows][columns]){
    int length = rows*columns;
    int sorted[length];
    int temp;
    for (int a=0; a<rows; a++){
        for (int b=0; b<columns; b++){
            int c = a * columns + b;
            sorted[c]=array[a][b];
        }
    }
    for (int i=0; i<length; i++){
        int max=sorted[i];
        for (int j=0; j<length;j++){
            if (sorted[j]>max){
                max=sorted[j]; //using swap to sort the array 
                temp=sorted[i];
                sorted[i]=sorted[j];
                sorted[j]=temp;
            }
        }
    }
    for (int o=0; o<rows; o++){
        for (int p=0; p<columns;p++){
            int f = o * columns + p;
            array[o][p]=sorted[f];
        }
    }
    for (int r=0; r<rows; r++){
        for (int c=0; c<columns; c++){
            printf("%d ", array[r][c]);
        }
        printf("\n");
    }
    
}
