#include<stdio.h>
long long ModularExponentiation(int a,int b,int m);
int main()
{
    int B,P,M;
    while(scanf("%d%d%d",&B,&P,&M)==3)
    {
        long long R;
        R=ModularExponentiation(B,P,M);
        printf("%d\n",R);
    }
    return 0;
}

long long ModularExponentiation(int a,int b,int m)
{
	long long c=0,i,d=1,j=0;
	int q;
	int A[500000];
	while(b>0)
    {
        A[j++]=b%2;
        b=b/2;
    }
	for(i=j-1;i>=0;i--)
	{
		c = 2*c;
		d = (d*d)%m;
		if(A[i]==1)
		{
			c++;
			d = (d*a)%m;
		}
	}
	q=d;
	return d;
}
