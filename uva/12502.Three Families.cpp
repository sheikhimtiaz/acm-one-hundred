#include<stdio.h>
int main()
{
    int i,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        double x,y,z,ave,xmn,xlas,ylas;
        scanf("%lf%lf%lf",&x,&y,&z);
        xlas=x-(x+y)/3;
        ylas=y-(x+y)/3;
        ave=z/(xlas+ylas);
        xmn=ave*xlas;
        if(xmn<0) printf("%.0lf\n",-xmn);
        else printf("%.0lf\n",xmn);
    }
    return 0;
}
