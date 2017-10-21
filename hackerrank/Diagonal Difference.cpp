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
#define modu 1000000007
int main()
{
    int n;
    cin >> n;
    vector< vector<int> > a(n,vector<int>(n));
    for(int a_i = 0; a_i < n; a_i++)
    {
        for(int a_j = 0; a_j < n; a_j++)
        {
            cin >> a[a_i][a_j];
        }
    }
    long long t1=0,t2=0,ans=0;
    for(int i=0; i<n; i++)
    {
        t1+= a[i][i];
        t2+= a[i][n-1-i];
        ans=abs(t1-t2);
    }
    printf("%d\n",ans);
    return 0;
}
