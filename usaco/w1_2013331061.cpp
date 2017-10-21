/*
ID: imticor1
PROG: ride
LANG: C++
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{

    ofstream fout ("ride.out");
    ifstream fin ("ride.in");
    char comet[500];
    char group[500];
    int n1,n2,i,j,k=1,l=1,temp;
    fin>>comet>>group;
    n1=strlen(comet);
    n2=strlen(group);
    for(i=0; i<n1; i++)
    {
        k=(comet[i]-'A'+1)*k;
    }
    for(i=0; i<n2; i++)
    {
        l=l*(group[i]-'A'+1);
    }
    if (k%47==l%47)
    {
        fout<<"GO\n";
    }
    else
    {
        fout<<"STAY\n";
    }
    return 0;
}
