#include <stdio.h>

void CreatePyramid(int num){ // forward declare CreatePyramid. Takes an int and prints a pyramid of that many rows.
    int rows = num;
    for (int i = 1; i <= rows; i++){
        for (int j = 1; j <= rows - 1; j++) {
         printf(" ");
        }
        for (int k = 1; k <= 2 * i - 1; k++) {
            printf("*");
        }
    printf("\n");
    }
}


int main(){
    
    
return 0;
}
