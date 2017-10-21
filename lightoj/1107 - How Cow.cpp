#include<bits/stdc++.h>
using namespace std;
#define pi 2*acos(0.0)
#define READ(f) freopen(f, "r", stdin)
#define WRITE(f) freopen(f, "w", stdout)
#define MAX 10000000
#define modu 1000000007

int main()
{
    int T,ar[4];
    cin >> T;
    for(int i = 1; i <= T; i++)
    {
        cin >> ar[0] >> ar[1] >> ar[2] >> ar[3];
        int m,fa[2];
        cin >> m;
        cout << "Case " << i << ":" << endl;
        for(int j = 0; j < m; j++){
            cin >> fa[0] >> fa[1];
            if(fa[0] >= ar[0]&& fa[1] >= ar[1] && fa[0] <= ar[2] && fa[1] <= ar[3])cout << "Yes" << endl;
            else cout << "No" << endl;
        }
    }
    return 0;
}
