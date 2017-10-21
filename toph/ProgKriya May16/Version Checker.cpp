#include<bits/stdc++.h>
#define pi 2*acos(0.0)
#define READ(f) freopen(f, "r", stdin)
#define WRITE(f) freopen(f, "w", stdout)
#define MAX 10000000
using namespace std;

int main ()
{
    string mainstr1,mainstr2;
    cin>>mainstr1>>mainstr2;
    int i,j,k,len1,len2,temp=1,number=0,cnt=0,i1,i2;
    len1=mainstr1.size();
    len2=mainstr2.size();
    vector<int > arr1,arr2;
    for(i=len1-1; i>=0; i--)
    {
        if(mainstr1[i]!='.')
        {
            number += (mainstr1[i]-'0')*temp;
            temp *=10;
        }
        else
        {
            arr1.push_back(number); number=0;
            temp=1;
        }
    }
    arr1.push_back(number);
    for(i=len2-1; i>=0; i--)
    {
        if(mainstr2[i]!='.')
        {
            number += (mainstr2[i]-'0')*temp;
            temp *=10;
        }
        else
        {
            arr2.push_back(number); number=0;
            temp=1;
        }
    }
    arr2.push_back(number);
    i1=arr1.size(); i2=arr2.size();
    while(i1>=0 && i2>=0)
    {
        if(arr1[i1]>arr2[i2])
        {
            cnt=1;
            cout<<mainstr1<<endl; break;
        }
        else if(arr1[i1]<arr2[i2])
        {
            cnt=1;
            cout<<mainstr2<<endl; break;
        }
        else
        {
            i1--; i2--;
        }
    }
    if(!cnt)
    {
        (len1>len2)? cout<<mainstr1<<endl:cout<<mainstr2<<endl;
    }
    return 0;
}
