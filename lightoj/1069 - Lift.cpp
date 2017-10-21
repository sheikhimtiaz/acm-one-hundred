#include<bits/stdc++.h>
using namespace std;
#define pi 2*acos(0.0)
#define READ(f) freopen(f, "r", stdin)
#define WRITE(f) freopen(f, "w", stdout)
#define MAX 10000000
#define modu 1000000007

int main()
{
    int tstCase;
    cin >> tstCase;
    for(int i = 1; i <= tstCase; i++)
    {
        int myPos,leftPos,des;
        cin >> myPos >> leftPos;
        des = (int)abs((double)myPos-leftPos);
        cout << "Case " << i << ": " << (des*4)+19+(myPos*4) << endl;
    }
    return 0;
}
