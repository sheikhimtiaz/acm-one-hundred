#include<bits/stdc++.h>
#define pi 2*acos(0.0)
#define READ(f) freopen(f, "r", stdin)
#define WRITE(f) freopen(f, "w", stdout)
#define MAX 10000000
using namespace std;

int main ()
{
    int arr[25][25];
    int i,j,k,l,m,n,temp,ans=0;
    for(i=0;i<20;i++)
    {
        for(j=0;j<20;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    cout<<"fuck my life\n"<<endl;
    for(i=0;i<20;i++)
    {
        temp=arr[i][0]*(arr[i][1]*(arr[i][2]*arr[i][3]));
        if(ans<temp)
        ans=temp;
        for(j=1;j<17;j++)
        {
            temp=temp/arr[i][j-1];
            temp=temp*arr[i][j+3];
            if(ans<temp) ans=temp;
        }
    }
    cout<<"fuck my life\n"<<endl;
    for(i=0;i<20;i++)
    {
        temp=arr[0][i]*arr[1][i]*arr[2][i]*arr[3][i];
        if(ans<temp)
        ans=temp;
        for(j=1;j<17;j++)
        {
            temp=temp/arr[j-1][i];
            temp=temp*arr[j+3][i];
            if(ans<temp) ans=temp;
        }
    }
    cout<<"fuck my life\n"<<endl;
    for(i=0;i<17;i++)
    {
        temp=arr[0][i]*arr[1][i+1]*arr[2][i+2]*arr[3][i+3];
        if(ans<temp)
        ans=temp;
        k=0;
        for(j=1;j<(17-i);j++)
        {
            temp=temp/arr[j-1][i+ k];
            temp=temp*arr[j+3][i+ k +3];
            k++;
            if(ans<temp) ans=temp;
        }
    }
    cout<<"fuck my life\n"<<endl;
    for(i=0;i<17;i++)
    {
        temp=arr[i][0]*arr[i+1][1]*arr[i+2][2]*arr[i+3][3];
        if(ans<temp)
        ans=temp;
        k=0;
        for(j=1;j<(17-i);j++)
        {
            temp=temp/arr[i+ k][j-1];
            temp=temp*arr[i+ k +3][j+3];
            k++;
            if(ans<temp) ans=temp;
        }
    }
    cout<<"fuck my life\n"<<endl;
    for(i=19;i>=3;i--)
    {
        temp=arr[i][0]*arr[i-1][1]*arr[i-2][2]*arr[i-3][3];
        if(ans<temp)
        ans=temp;
        k=0;
        for(j=1;j<(17-i);j++)
        {
            temp=temp/arr[i- k][j-1];
            temp=temp*arr[i- k -3][j+3];
            k++;
            if(ans<temp) ans=temp;
        }
    }
    cout<<"fuck my life\n"<<endl;
    for(i=19;i>=3;i--)
    {
        temp=arr[0][i]*arr[1][i-1]*arr[2][i-2]*arr[3][i-3];
        if(ans<temp)
        ans=temp;
        k=0;
        for(j=1;j<(17-i);j++)
        {
            temp=temp/arr[j-1][i- k];
            temp=temp*arr[j+3][i- k -3];
            k++;
            if(ans<temp) ans=temp;
        }
    }
    cout<<"fuck my life\n"<<endl;
    return 0;
}
