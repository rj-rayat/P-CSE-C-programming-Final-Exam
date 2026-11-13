#include <stdio.h>
int main()
{ 
    int n;
    scanf("%d", &n);


    int for_shakha = n / 2;
    int shakha = 6 + for_shakha;
    
    int star = 1;
    int space = shakha-1;
    for (int i = 0; i < shakha; i++)
    {
        for (int s = space; s > 0; s--)
        {
            printf(" ");
        }
        for (int j = 0; j < star; j++)
        {
            printf("*");
        }
        star+=2;
        space--;
        printf("\n");
    }
    int down_space = 5;
    for (int i = 0; i < 5; i++)
    {
        for (int s = 1; s<=down_space; s++)
        {
            printf(" ");
        }
        for (int j = 0; j < n; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    
    
    return 0;
}