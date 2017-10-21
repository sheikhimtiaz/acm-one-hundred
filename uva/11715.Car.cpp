#include<stdio.h>
#include<math.h>
int main()
{
    int n,i=1;
    while(scanf("%d",&n)==1)
    {
        double u,v,a,s,t;
        if(n==0) break;
        else if(n==1)
        {
            scanf("%lf %lf %lf",&u,&v,&t);
            a=(v-u)/t;
            s=(v*v-u*u)/(2*a);
            printf("Case %d: %.3lf %.3lf\n",i,s,a);
        }
        else if(n==2)
        {
            scanf("%lf %lf %lf",&u,&v,&a);
            t=(v-u)/a;
            s=(v*v-u*u)/(2*a);
            printf("Case %d: %.3lf %.3lf\n",i,s,t);
        }
        else if(n==3)
        {
            scanf("%lf %lf %lf",&u,&a,&s);
            v=pow((u*u+2*(a*s)),(1.0/2));
            t=(v-u)/a;
            printf("Case %d: %.3lf %.3lf\n",i,v,t);
        }
        else if(n==4)
        {
            scanf("%lf %lf %lf",&v,&a,&s);
            u=pow((v*v-2*a*s),(1.0/2));
            t=(v-u)/a;
            printf("Case %d: %.3lf %.3lf\n",i,u,t);
        }
        i++;
    }
    return 0;
}
