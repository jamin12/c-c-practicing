#include <stdio.h>

int main()
{
    int a = 1, b = 1, c = 0, i;
    for (i = 0; i <= 10; i++)
    {
        c = a + b;
        if (c < 100)
        {

            
            printf("%d", c);
        }
        a = b;
        b = c;
    }
    return 0;
}
