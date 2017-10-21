#include<stdio.h>
int main()
{
    int i,tc;
    scanf("%d",&tc);
    for(i=1;i<=tc;i++)
    {
        int term1,term2,finale,atten,ct1,ct2,ct3,gct1,gct2,sum;
        scanf("%d%d%d%d%d%d%d",&term1,&term2,&finale,&atten,&ct1,&ct2,&ct3);
        if(ct1>=ct3 && ct2>=ct3) {gct1=ct1;gct2=ct2;}
        if(ct2>=ct1 && ct3>=ct1) {gct1=ct2;gct2=ct3;}
        if(ct1>=ct2 && ct3>=ct2) {gct1=ct1;gct2=ct3;}
        sum=term1+term2+finale+atten+(gct1+gct2)/2;
        if(sum<60) printf("Case %d: F\n",i);
        else if(sum<70 && sum>=60)  printf("Case %d: D\n",i);
        else if(sum<80 && sum>=70) printf("Case %d: C\n",i);
        else if(sum<90 && sum>=80) printf("Case %d: B\n",i);
        else if(sum>=90) printf("Case %d: A\n",i);
    }
    return 0;
}
