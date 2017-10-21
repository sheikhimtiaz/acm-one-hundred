/*
ID: imticor1
PROG: friday
LANG: C++
*/
#include<bits/stdc++.h>
#define pi 2*acos(0.0)
using namespace std;
int Call(int m,int n)
{
    int D=n%100,C=n/100,d;
    int temp1,temp2,temp3,temp4;
    int r=13%7;
    temp1=(13*m - 1);
    temp1=temp1/5;
    temp1=temp1%7;
    temp2=2*C;
    temp2=temp2%7;
    D=D%7;
    temp3=C/4;
    temp3=temp3%7;
    temp4=D/4;
    temp4=temp4%7;
    d=r+temp1+D+temp3+temp4;
    d=d-temp2;
    d=d%7;
    return d;
}
int main ()
{
    //ofstream fout ("friday.out");
    //ifstream fin ("friday.in");
    int n;
    while(scanf("%d",&n)!=EOF)
    {
        int target=1900+n-1,day;
        int sunday=0,monday=0,tuesday=0,wednesday=0,thursday=0,friday=0,saturday=0;
        for(int i=1900;i<=target;i++)
        {
            for(int j=1;j<=12;j++)
            {
                day=Call(j,i);
                if(day==0) sunday++;
                else if(day==1) monday++;
                else if(day==2) tuesday++;
                else if(day==3) wednesday++;
                else if(day==4) thursday++;
                else if(day==5) friday++;
                else if(day==6) saturday++;
            }
        }
        printf("%d %d %d %d %d %d %d\n",saturday,sunday,monday,tuesday,wednesday,thursday,friday);
    }
    return 0;
}
