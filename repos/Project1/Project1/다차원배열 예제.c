#include <stdio.h>

int main() {
    
    int result[9][9];

   
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 8; j++) {
            result[i][j] = (i + 1) * (j + 2);
        }
    }

    
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 8; j++) {
            
                printf("%dX%d=%-3d  ",  j + 2 ,i + 1,  result[i][j]);
            }
        
        printf("\n");
    }


}
