#include<bits/stdc++.h>
using namespace std;
#define pi 2*acos(0.0)
#define READ(f) freopen(f, "r", stdin)
#define WRITE(f) freopen(f, "w", stdout)
#define MAX 10000000
#define modu 1000000007

int main ()
{
    int n,x;
    cin>>n>>x;
    long long totalCream=x, sadKids=0;
    for(int i=0;i<n;i++)
    {
        string sign;
        long long tempNum;
        cin>>sign>>tempNum;
        if(sign=="+")
        {
            totalCream+=tempNum;
        }
        else
        {
            if(totalCream>=tempNum)
            {
                totalCream-=tempNum;
            }
            else
            {
                sadKids++;
            }
        }
    }
    cout<<totalCream<<" "<<sadKids<<endl;
    return 0;
}
