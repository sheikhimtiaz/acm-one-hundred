#include<bits/stdc++.h>
#define pi 2*acos(0.0)
#define READ(f) freopen(f, "r", stdin)
#define WRITE(f) freopen(f, "w", stdout)
using namespace std;

int main()
{
    int i,testcase;
    scanf("%d",&testcase);
    for(i=0;i<testcase;i++)
    {
        long long number,squareRoot,floorNumber,middleGuy,temp;
        scanf("%lld",&number);
        squareRoot=sqrt(number);
        if(number==2)
        {
            printf("Case %d: 1 2\n",i+1);
            continue;
        }
        if((squareRoot*squareRoot)==number)
        {
            if(squareRoot%2==0)
                printf("Case %d: %lld 1\n",i+1,squareRoot);
            else
                printf("Case %d: 1 %lld\n",i+1,squareRoot);
            continue;
        }
        else if(squareRoot%2==1)
        {
            floorNumber=number%(squareRoot*squareRoot);
            middleGuy=(((squareRoot+1)*(squareRoot+1))-(squareRoot*squareRoot))/2;
            middleGuy+=(squareRoot*squareRoot)+1;
            if(number==middleGuy)
            {
                printf("Case %d: %lld %lld\n",i+1,squareRoot+1,squareRoot+1);
                continue;
            }
            else if(number<middleGuy)
            {
                printf("Case %d: %lld %lld\n",i+1,number%(squareRoot*squareRoot),squareRoot+1);
                continue;
            }
            else
            {
                temp=((squareRoot+1)*(squareRoot+1))%number;
                temp+=1;
                printf("Case %d: %lld %lld\n",i+1,squareRoot+1,temp);
                continue;
            }
        }
        else if(squareRoot%2==0)
        {
            floorNumber=number%(squareRoot*squareRoot);
            middleGuy=(((squareRoot+1)*(squareRoot+1))-(squareRoot*squareRoot))/2;
            middleGuy+=(squareRoot*squareRoot)+1;
            if(number==middleGuy)
            {
                printf("Case %d: %lld %lld\n",i+1,squareRoot+1,squareRoot+1);
                continue;
            }
            else if(number<middleGuy)
            {
                printf("Case %d: %lld %lld\n",i+1,squareRoot+1,number%(squareRoot*squareRoot));
                continue;
            }
            else
            {
                temp=((squareRoot+1)*(squareRoot+1))%number;
                temp+=1;
                printf("Case %d: %lld %lld\n",i+1,temp,squareRoot+1);
                continue;
            }
        }
    }
    return 0;
}
