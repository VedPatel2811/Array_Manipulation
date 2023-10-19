#include <stdio.h>
#include <stdlib.h>
#include "array.h"

void randomArray(int rows, int columns, int array[rows][columns]){
    srand(1987);
    
    int length = rows*columns;
    int random[length];
    int temp, r;

    for (int a=0; a<rows; a++){
        for (int b=0; b<columns; b++){
            int c = a * columns + b;
            random[c]=array[a][b];
        }
    }
    for (int i = 0; i < length; i++){
        r = rand() % length;

        temp=random[i];
        random[i]=random[r]; //using the swap to stop repetation
        random[r]=temp;
    } 
    for (int o=0; o<rows; o++){
        for (int p=0; p<columns;p++){
            int f = o * columns + p;
            array[o][p]=random[f];
        }
    }

    for (int a=0; a<rows; a++){
        for (int b=0; b<columns; b++){
            printf("%d ", array[a][b]);
        }
        printf("\n");
    }

}
 