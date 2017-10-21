#include<bits/stdc++.h>
using namespace std;
#define pi 2*acos(0.0)
#define READ(f) freopen(f, "r", stdin)
#define WRITE(f) freopen(f, "w", stdout)
#define MAX 10000000
#define modu 1000000007

int main ()
{
    int number;
    cin>>number;
    if(number%2==0)
    {
        int temp=number/2;
        cout<<temp<<endl;
        for(int i=0;i<temp;i++)
        {
            if(i!=0) cout<<" ";
            cout<<"2";
        }
        cout<<""<<endl;
    }
    else
    {
        number=number-3;
        int temp=number/2;
        temp+=1;
        cout<<temp<<endl;
        for(int i=1;i<temp;i++)
        {
            cout<<"2 ";
        }
        cout<<"3"<<endl;
    }
    return 0;
}
