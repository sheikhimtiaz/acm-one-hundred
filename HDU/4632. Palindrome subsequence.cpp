#include<bits/stdc++.h>
#include <iostream>
#include <fstream>
#include <cmath>
#include <cstring>
#include <cstdio>
#include <vector>
#include <stack>
#include <queue>
#include <ctime>
#include <climits>
#include <cctype>
#include <iomanip>
#include <algorithm>
#include <list>
#include <map>
//#include<unordered_map>
#include <set>
using namespace std;

#define rep(i,n) for(int (i)=0;(i)<(int)(n);++(i))
#define rev(j,n) for(int (i)=j;(i)>=(int)(n);--(i))
#define rer(i,l,u) for(int (i)=(int)(l);(i)<=(int)(u);++(i))
#define reu(i,l,u) for(int (i)=(int)(l);(i)<(int)(u);++(i))
#define rerm(i,l,u,m) for(int (i)=(int)(l);(i)<=(int)(u);(i)+=(m))
typedef long long int lli;
typedef long long ll;
typedef unsigned long long int ulli;
#define vec vector
#define pii pair<int,int>
#define pis pair<int, string>
#define psi pair<string,int>
#define pli pair<lli,lli>
typedef vec<int> vi;
typedef vec<vi > vii;
typedef vec<pii > vpii;

#define pi 2*acos(0.0)
#define READ(f) freopen(f, "r", stdin)
#define WRITE(f) freopen(f, "w", stdout)
#define MAX 10000000
//#define modu 1000000007

const int N=1010;
const int mod=10007;

char str[N];
int dp[N][N];

int DFS(int l,int r)
{
    if(l>r)
        return 0;
    if(l==r)
        return 1;
    if(dp[l][r]!=-1)
        return dp[l][r];
    dp[l][r]=(DFS(l+1,r)+DFS(l,r-1)-DFS(l+1,r-1)+mod)%mod;
    if(str[l]==str[r])
        dp[l][r]=(dp[l][r]+DFS(l+1,r-1)+1+mod)%mod;
    return dp[l][r];
}

int main()
{
    int t,cases=0;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%s",str+1);
        int len=strlen(str+1);
        memset(dp,-1,sizeof(dp));
        printf("Case %d: %d\n",++cases,DFS(1,len));
    }
    return 0;
}
