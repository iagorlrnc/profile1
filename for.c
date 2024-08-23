#include <stdio.h> 
#include <stdlib.h>

int main (){
  int i;
  int j;

    for (i = 1; i < 3; i++){
        for ( j = 1; j <= 3; j++)
        {
            printf("teste \n");
        }
        printf("%d\n", j);
    }
    printf("%d %d", i, j);
}
