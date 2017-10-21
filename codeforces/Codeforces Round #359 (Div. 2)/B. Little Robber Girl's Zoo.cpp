#include<bits/stdc++.h>
using namespace std;
#define pi 2*acos(0.0)
#define READ(f) freopen(f, "r", stdin)
#define WRITE(f) freopen(f, "w", stdout)
#define MAX 10000000
#define modu 1000000007

int main ()
{
    int n,temp,l,r,keepCount=0;
    cin>>n;
    vector<int > a;
    for(int i=0;i<n;i++)
    {
        cin>>temp; a.push_back(temp);
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<(n-1);j++)
        {
            if(keepCount>20000) break;
            if(a[j]>a[j+1])
            {
                l=j;
                while(a[j]>a[j+1] && j<(n-1))
                {
                    temp=a[j];
                    a[j]=a[j+1];
                    a[j+1]=temp;
                    j+=2;
                }
                r=j-1;

                cout<<l+1<<" "<<r+1<<endl;
                keepCount++;
            }
        }

            if(keepCount>20000) break;
    }
    return 0;
}
