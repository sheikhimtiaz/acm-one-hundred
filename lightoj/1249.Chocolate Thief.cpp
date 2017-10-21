#include<stdio.h>
int main()
{
    int T,cs=1;
    scanf("%d",&T);
    while(T--)
    {
        int numOfstud,i,maxchoco=0,minchoco=999999999,maxstr,minstr;
        char c;
        char name[500][500];
        int x,y,z,xyz[500];
        scanf("%d",&numOfstud);
        for(i=0; i<numOfstud; i++)
        {
            scanf("%s %d %d %d%c",&name[i],&x,&y,&z,&c);
            xyz[i]=x*y*z;
        }
        for(i=0; i<numOfstud; i++)
        {
            if(maxchoco<xyz[i])
            {
                maxchoco=xyz[i];
                maxstr=i;
            }
            if(minchoco>xyz[i])
            {
                minchoco=xyz[i];
                minstr=i;
            }
        }
        if(maxchoco==minchoco)
            printf("Case %d: no thief",cs++);
        else
            printf("Case %d: %s took chocolate from %s",cs++,name[maxstr],name[minstr]);
        if(T!=0)
            printf("\n");
    }
    return 0;
}
