#include<bits/stdc++.h>
#define pi 2*acos(0.0)
using namespace std;

int main ()
{
    int np;
    while(scanf("%d",&np) != EOF)
    {
        map<string,int> names;
        map<int,string> seqOname;
        int i,k,temp;
        string name;
        for(i=0; i<np; i++)
        {
            cin>>name;
            names[name]=0;
            seqOname[i]=name;
        }
        for(i=0; i<np; i++)
        {
            int gift,AoG,AoP,p;
            cin>>name;
            cin>>AoG>>AoP;
            if(AoG!=0 && AoP!=0)
            {
                names[name]=names[name]-AoG;
                names[name]=names[name]+AoG%AoP;
                gift=AoG/AoP;
                for(p=0; p<AoP; p++)
                {
                    cin>>name;
                    names[name]=names[name]+gift;
                }
            }
            else
            {
                for(p=0; p<AoP; p++)
                {
                    cin>>name;
                }
            }
        }
        for(i=0; i<np; i++)
        {
            cout<<seqOname[i]<<" "<<names[seqOname[i]]<<endl;
        }
    }
    return 0;
}
