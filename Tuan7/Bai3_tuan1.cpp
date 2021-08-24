#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n=4; int q = 0;
    printf("Tam giac cao 4* dai day 7* co hinh dang sau: \n");
    while (n > 0)
    {
        for (int i = 1; i<n; i++)
            printf("%c ", ' ');
        for (int k = 0; k <= q; k ++)
            printf("%c ", '*');
        for (int k = 0; k < q; k ++)
            printf("%c ", '*');
        n -- ;
        q ++ ;
        printf("\n");
    }
return 0;

}

