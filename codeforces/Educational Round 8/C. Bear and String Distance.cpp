#include<bits/stdc++.h>
#define pi 2*acos(0.0)
#define READ(f) freopen(f, "r", stdin)
#define WRITE(f) freopen(f, "w", stdout)
#define MAX 10000000
using namespace std;

int main ()
{
    int strlen, k, temp,i;
    scanf("%d %d",&strlen, &k);
    string str;
    cin>> str;
    if(k==0)
    {
        cout<< str<<endl;
            return 0;
    }
    for(i=0; i<strlen; i++)
    {
        if(k==0) continue;
        temp=str[i] - 'a' +1;
        if(temp>13)
        {
            if(k>= (temp-1))
            {
                k=k+1-temp;
                str[i]=str[i] - temp +1;
            }
            else
            {
                str[i]= str[i] -k;
                k=0;
            }
        }
        else if(temp<=13)
        {
            if(k>=(26-temp))
            {
                k=k+temp - 26;
                str[i]= str[i] -temp +26;
            }
            else
            {
                str[i]= str[i]+k;
                k=0;
            }
        }
    }
    if(k==0)
        cout<< str<<endl;
    else
        printf("-1\n");
    return 0;
}
