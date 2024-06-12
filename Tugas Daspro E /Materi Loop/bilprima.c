#include <stdio.h>
#include <math.h>

int main()
{
    int x ,y; // buat range
    int prime = 1; // buat ngecek bilangan prima 
    scanf("%d %d", &x, &y);

    for (int i = x; i <= y; ++i)
    {
        if (i < 2 && i >= 0)
        {
            continue;
        }
        for (int a = 2; a <= sqrt(i); ++a)
        {
            if (i % a == 0)
            {
                prime = 0;
            }
        }
        if (prime == 1)
        {
            printf("%d ", i);
        }
        prime = 1;
    }

    return 0;
} 