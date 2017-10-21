#include <stdio.h>

int main()
{
    int i=0, n, m,q=0,l,j=0, h;

    while(scanf("%d %d", &n, &m)==2)
    {
        l= 0;
        q = n / m;
        h = q;
       while(q>=m)
        {
            q=q/m;
            l=l+q;
        }
        i=n +h +l;
        printf("%d\n",i);
   }
    return 0;
}
