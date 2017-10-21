#include<stdio.h>
int ModularExponentiation(int a,int b,int m);
int main()
{
    int i,t,z;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        int B,P,M;
        scanf("%d%d%d",&B,&P,&M);
        int R;
        R=ModularExponentiation(B,P,M);
        printf("%d\n",R);
    }
    scanf("%d",&z);
    return 0;
}
int ModularExponentiation(int a,int b,int m)
{
	long long int i,d=1,j=0;
	int A[500000];
	while(b>0)
    {
        A[j]=b%2;
        j++;
        b=b/2;
    }
	for(i=j-1;i>=0;i--)
	{
		d = (d*d)%m;
		if(A[i]==1)
		{
			d=(d*a)%m;
		}
	}
	return d;
}
