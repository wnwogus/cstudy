#include <stdio.h>

int main(void)
{
    int a,b;
    scanf_s("%d", &a);
    if(((a - (a%10))/10) == a%10)
    {
        printf("Yes");
    }

}