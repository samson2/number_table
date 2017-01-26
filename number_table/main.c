#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y;
    for(x = 0; x <11; x++)
    {
        for(y = 0; y < 11; y++)
        {
            printf("%d", x*y);
        }
        printf("\n");
    }
}
