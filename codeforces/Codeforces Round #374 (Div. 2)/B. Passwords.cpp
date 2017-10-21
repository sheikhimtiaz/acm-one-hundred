#include<bits/stdc++.h>
using namespace std;
#define pi 2*acos(0.0)
#define READ(f) freopen(f, "r", stdin)
#define WRITE(f) freopen(f, "w", stdout)
#define MAX 10000000
#define modu 1000000007

int main ()
{
    int n,k;
    cin>>n>>k;
    string temp,password;
    int templen,targetlen,best=0,worst=0,i;
    vector<int > lngth;
    for(i=0; i<n; i++)
    {
        cin>>temp;
        templen=temp.length();
        lngth.push_back(templen);
    }
    sort(lngth.begin(), lngth.end());
    cin>>password;
    targetlen=password.length();
    for(i=0; i<n; i++)
    {
        if(lngth[i] > targetlen)
            break;
        else if(lngth[i] < targetlen )
        {
            best++;
            if(i%k == (k-1) && i!=(n-1) && lngth[i+1] <= targetlen)
                best+=5;
            worst=best;
            continue;
        }
        else if(lngth[i] == targetlen)
        {
            worst++;
            if(i%k == (k-1) && i!=(n-1) && lngth[i+1] == targetlen )
                worst+=5;
            continue;
        }
    }
    best++;
    cout<<best<<" "<<worst<<endl;
    return 0;
}
