#include<stdio.h>
int main()
{
    long long int hashmat,opponent;
    long long int m,n;
    long long int dif;
    while(scanf("%lld %lld",&m,&n)==2)
    {
        if(n>m)
        {
            hashmat=m;
            opponent=n;
        }
        else
        {
            hashmat=n;
            opponent=m;
        }
        dif=opponent-hashmat;
        printf("%lld\n",dif);
    }
    return 0;
}
