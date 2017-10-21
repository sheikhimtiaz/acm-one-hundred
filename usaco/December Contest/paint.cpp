#include<bits/stdc++.h>
#define pi 2*acos(0.0)
#define READ(f) freopen(f, "r", stdin)
#define WRITE(f) freopen(f, "w", stdout)
#define MAX 10000000
using namespace std;

int main ()
{
    ofstream fout ("paint.in");
    ifstream fin ("paint.in");
    int a,b,c,d;
    fin>>a>>b>>c>>d;
    if(b<c  ||  d<a )
    {
        fout<<(b-a)+(d-c)<<endl;
    }
    else if(a<c)
    {
        if(b<d)
        {
            fout<<d-a<<endl;
        }
        else
        {
            fout<<b-a<<endl;
        }
    }
    else
    {
        if(b<d)
        {
            fout<<d-c<<endl;
        }
        else
        {
            fout<<b-c<<endl;
        }
    }
    return 0;
}
