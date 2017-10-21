#include<bits/stdc++.h>
#define pi 2*acos(0.0)
#define READ(f) freopen(f, "r", stdin)
#define WRITE(f) freopen(f, "w", stdout)
#define MAX 10000000
using namespace std;

int main ()
{
    int testcase,cs=1;
    scanf("%d",&testcase);
    while(testcase--)
    {
        string strdec,strbin;
        cin>>strdec;
        cin>>strbin;
        int declen,binlen,i,j=0,k=1,temp,m,n,mlt=1;
        bool anschck=false;
        int arr[5]={0};
        int barr[5]={0};
        declen=strdec.length();
        binlen=strbin.length();
        for(i=declen-1;i>=0;i--)
        {
            if(strdec[i]=='.')
            {
                mlt=1; j++;
                continue;
            }
            arr[j]+= (strdec[i]-'0')*mlt;
            mlt*=10;
        }
        mlt=1; j=0;
        for(i=binlen-1;i>=0;i--)
        {
            if(strbin[i]=='.')
            {
                mlt=1; j++; k=1;
                continue;
            }
            barr[j]+= (strbin[i]-'0')*mlt;
            mlt=pow(2,k++);
        }
        for(i=0;i<4;i++)
        {
            if(arr[i]!=barr[i])
            {
                anschck=true;
            }
        }
        if(anschck)
        {
            printf("Case %d: No\n",cs++);
        }
        else
        {
            printf("Case %d: Yes\n",cs++);
        }
    }
    return 0;
}
