#include <stdio.h>
#include <stdbool.h>
int main()
{ 
  int n, m;
  scanf("%d %d", &n, &m);

  int a[n][m];

  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
    {
        scanf("%d", &a[i][j]);
    }
  }

  if (n == m)
  {
    
    bool diagonal = true;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (i == j || i + j == n - 1)
            {
                if (a[i][j] != 1)
                {
                    diagonal = false;
                    break;
                }
            }
            
        }
    }


    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (i + j != n - 1 && a[i] != a[j])
            {
                if (a[i][j] > 0)
                {
                    diagonal = false;
                    break;
                }
            }
            
        }
    }

    if (diagonal == true)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }

  }
  else
  {
    printf("NO\n");
  }
  
}