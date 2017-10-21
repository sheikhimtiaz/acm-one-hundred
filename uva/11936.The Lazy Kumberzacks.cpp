#include<stdio.h>
int main()
{
    int tc,i;
    scanf("%d",&tc);
    for(i=1;i<=tc;i++)
    {
        int x,y,z;
        scanf("%d %d %d",&x,&y,&z);
        if((x+y)<=z || (y+z)<=x || (x+z)<=y)
            printf("Wrong!!\n");
        else printf("OK\n");
    }
    return 0;
}
