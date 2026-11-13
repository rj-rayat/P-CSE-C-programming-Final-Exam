#include <stdio.h>
int main()
{ 
    long long int t;
    scanf("%lld", &t);

    
    long long int m;
    long long int a, b, c;
    for (int i = 1; i <= t; i++)
    {
        scanf("%lld %lld %lld %lld", &m, &a, &b, &c);
        long long int multiplication = a * b * c;

        long long result = m / multiplication;

        if (multiplication == 0 || m % multiplication != 0 )
        {
            printf("%d\n", -1);
        }
        
        else
        {
            printf("%lld\n", result);
        }

    }
    return 0;
}