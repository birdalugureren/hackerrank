#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void calculate_the_maximum(int n, int k)
{

    int max_and = 0;
    int max_or = 0;
    int max_xor = 0;

    if ((2 <= k) & (k <= n))
    {
        for (int i = 1; i < n; i++)
        {

            for (int j = i + 1; j <= n; j++)
            {
                int and_val = i & j;
                int or_val = i | j;
                int xor_val = i ^ j;
                if ((and_val > max_and) & (and_val < k))
                {
                    max_and = and_val;
                }
                if ((or_val > max_or) & (or_val < k))
                {
                    max_or = or_val;
                }
                if ((xor_val > max_xor) & (xor_val < k))
                {
                    max_xor = xor_val;
                }
            }
        }
    }
    else
    {
        exit(EXIT_FAILURE);
    }
    printf("%d\n%d\n%d", max_and, max_or, max_xor);
}

int main()
{
    int n, k;

    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);

    return 0;
}
