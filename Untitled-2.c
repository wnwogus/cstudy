#include <stdio.h>
int main(void){
    int a,b,c;
    scanf_s("%d", &a);
    for (int i= 0;i < (a + 1) / 2; i++)
    {
        for (int j = 0; j<(a+1)/2 -i ;j++) {
            printf(" ");
        
        }
        for (int k = 0; k < 2 * i + 1; k++)
        {
            printf("*");

        }
        printf("\n");
    }
    
}

 