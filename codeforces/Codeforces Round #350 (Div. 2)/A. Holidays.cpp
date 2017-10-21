#include<bits/stdc++.h>
#define pi 2*acos(0.0)
#define READ(f) freopen(f, "r", stdin)
#define WRITE(f) freopen(f, "w", stdout)
#define MAX 10000000
using namespace std;

int main ()
{
    long long number;
    cin>>number;
        long long maxans,minans,i,j,temp,pOne,mOne;
        if(number%7==0)
        {
            maxans=minans=(number/7)*2;
            printf("%lld %lld\n",minans,maxans);
        }
        else
        {
            temp=number%7;
            number=number-temp;
            minans=(number/7)*2;
            if(temp==1) pOne=1;
            else  pOne=2;
            maxans=minans+pOne;
            if(temp==6) {mOne=1; minans+=mOne;}
            printf("%lld %lld\n",minans,maxans);
        }

    return 0;
}
