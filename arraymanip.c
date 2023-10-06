#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>


int main(){
    int length=0; //initializing variables 
    int r;
    
    
    printf("Enter the length: "); //taking an input of array size from user 
    scanf("%d", &length);

    int array[length];
    printf("Enter %d number (Space seperated): ", length); 
    
    for (int i=0; i< length; i++){ //to take an input of values for the arrays 
        scanf("%d", &array[i]);
    }
    
    int temp;
    int sorted[length];
    int random[length];//initializing more values 

    while (true){
        int choice=-1;
        printf("Choose an operation: \n");
        printf("(0) : exit\n");
        printf("(1) : reverse array\n");
        printf("(2) : randomize array\n");
        printf("(3) : sort array\n");
        scanf("%d", &choice);
        

        switch (choice){ //switch case 
        case 0:
            return 0;
        break;
        case 1:
            printf("{ ");
            for (int i=(length-1); i>=0; i--){ //loop for revercing the array 
               printf("%d ", array[i]); 
            }
            printf("}\n");
        break;
        case 2:
            srand(1987);
            for (int j = 0 ; j<length;j++){ //to randomize the array 
                random[j]=array[j];
            }
            for (int i = 0; i < length; i++){
                r = rand() % length;

                temp=random[i];
                random[i]=random[r]; //using the swap to stop repetation
                random[r]=temp;
            } 
            printf("{ ");
            for (int z=0; z<length; z++){ //printing the array
                printf("%d ", random[z]);
            }
            printf(" }\n");
       
        break;
        case 3:
            for(int a =0; a<length; a++){ 
                sorted[a]=array[a];
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
            printf("{ ");
            for (int k =0; k<length; k++){
                printf("%d ", sorted[k]); //printed the sorted array
            }
            printf(" }\n");
        break;
        default:
        break;
        }
    }
    
}
