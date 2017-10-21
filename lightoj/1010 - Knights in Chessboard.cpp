#include<bits/stdc++.h>
#define pi 2*acos(0.0)
#define READ(f) freopen(f, "r", stdin)
#define WRITE(f) freopen(f, "w", stdout)
#define MAX 10000000
using namespace std;
int knightsInChessboard(int r,int c)
{
    if(r%2==0 || c%2==0)
    {
        int i,j,k,temp,ans,odd,even;
        if(r%2==0) {even=r;odd=c;}
        else {even=c; odd=r;}
        temp=even/2;
        ans=temp*odd;
        return ans;
    }
    else if(r%2==1 && c%2==1)
    {
        int i,j,k,temp1,temp2,ans;
        temp1=(r/2)*(c/2);
        temp2=((r/2)+1)*((c/2)+1);
        ans=temp1+temp2;
        return ans;
    }
}
int two(int r,int c)
{
    int ans,temp;
    temp = knightsInChessboard(r, c);
    r = max(r, c);
    ans = (r / 4) * 4 + min(2, r % 4) * 2;
    ans = max(ans, temp);
    return ans;

}
int main (void)
{
    int testcase,cs=1; scanf("%d",&testcase);
    while(testcase--)
    {
        int ans,r,c;
        scanf("%d%d",&r,&c);
        if(r<2 || c<2)
        {
            ans=r>c ? r:c;
            printf("Case %d: %d\n",cs++,ans);
            continue;
        }
        else if(r==2 || c==2)
        {
            printf("Case %d: %d\n", cs++, two(r,c));
            continue;
        }
        ans=knightsInChessboard(r,c);
        printf("Case %d: %d\n",cs++,ans);
    }
    return 0;
}
