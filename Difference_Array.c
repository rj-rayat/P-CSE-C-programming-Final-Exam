#include <stdio.h>
int main()
{ 
  int t;
  scanf("%d", &t);


  for (int i = 1; i <= t; i++)
  {
    int n;
    scanf("%d", &n);
    
    int a[n];
    int b[n];


    for (int j = 0; j<n; j++)
    {
        scanf("%d ", &a[j]);
    }


    for (int j = 0; j<n; j++)
    {
        b[j] = a[j];
    }


    for (int j = 0; j<n; j++)
    {
        for (int k = j+1; k < n; k++)
        {
            if (b[j] > b[k])
            {
                int temp = b[j];
                b[j] = b[k];
                b[k] = temp;
            }
        }
    }
    for (int j = 0; j<n; j++)
    {
        printf("%d ", abs(a[j] - b[j]));
    }
    printf("\n");
  }
  return 0;
}