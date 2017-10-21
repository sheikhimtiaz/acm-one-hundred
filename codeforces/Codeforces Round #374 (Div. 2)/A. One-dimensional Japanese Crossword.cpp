#include<bits/stdc++.h>
using namespace std;
#define pi 2*acos(0.0)
#define READ(f) freopen(f, "r", stdin)
#define WRITE(f) freopen(f, "w", stdout)
#define MAX 10000000
#define modu 1000000007

int main ()
{
    int n;
    char prevChar, currChar,ch;
    int k=0,var=0;
    vector<int > kSize;
    cin>>n;
    cin>>prevChar;
    if(prevChar=='B')
    {var=1; k++;}
    for(int i=1; i<n; i++)
    {
        cin>>currChar;
        if(prevChar!=currChar)
        {
            if(prevChar=='W')
            {
                k++;
                var=1;
            }
            else
            {
                kSize.push_back(var);
                var=0;
            }
        }
        else
        {
            if(currChar=='W')
                continue;
            else
            {
                var++;
            }
        }
        prevChar=currChar;
    }
    if(prevChar=='B')
    {
        kSize.push_back(var);
    }
    printf("%d\n",k);
    int len=kSize.size();
    for(int i=0; i<len; i++)
    {
        if(kSize[i]!=0)
        {
            printf("%d",kSize[i]);
            if(i!= (len-1) )
            {
                printf(" ");
            }
        }
    }
    return 0;
}
