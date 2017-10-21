#include<bits/stdc++.h>
using namespace std;
#define pi 2*acos(0.0)
#define READ(f) freopen(f, "r", stdin)
#define WRITE(f) freopen(f, "w", stdout)
#define MAX 10000000
#define modu 1000000007

int main ()
{
    int num;
    cin>>num;
    vector<int> temp;
    int tmp;
    int sum=0;
    int minPos=100000000, maxNeg=-100000000;
    for(int i=0;i<num;i++)
    {
        cin>>tmp; temp.push_back(tmp);
    }
    for(int i=0;i<num;i++)
    {
        tmp=temp[i];
        if(tmp>0)
        {
            sum+=tmp;
            if(tmp%2==1)
            minPos=min(tmp,minPos);
        }
        else
        {
            if(tmp%2!=0)
            maxNeg=max(tmp,maxNeg);
        }
    }
    if(sum%2==1)
    {
        cout<<sum<<endl;
    }
    else
    {
        cout<<max(sum-minPos, sum+maxNeg)<<endl;
    }
    return 0;
}
