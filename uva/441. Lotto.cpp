#include<bits/stdc++.h>
#define pi 2*acos(0.0)
#define READ(f) freopen(f, "r", stdin)
#define WRITE(f) freopen(f, "w", stdout)
using namespace std;
int combin(int n)
{
    int hor=1,lob=1,temp,result,i,j;
    for(i=n; i>6; i--)
    {
        lob=lob*i;
    }
    for(j=n-6; j>=1; j--)
    {
        hor=hor*j;
    }
    result=lob/hor;
    return result;
}
int  main()
{
    int num;
    bool blank = false;
    while(scanf("%d",&num)==1 && num)
    {

        if ( blank )
            printf ("\n");
        blank = true;
        int result[8];
        int i,j=0,resultcount,temp,k,loopcount=0;
        vector<int> arr;
        for(i=0; i<8; i++)
        {
            result[i]=i;
        }
        for(i=0; i<num; i++)
        {
            scanf("%d",&temp);
            arr.push_back(temp);
        }
        resultcount=combin(num);
        while(resultcount--)
        {
            for(i=0; i<6; i++)
            {
                printf("%d",arr[result[i]]);
                if(i!=5) printf(" ");
            }
            printf("\n");
            j=5;
            temp=num-1;
            if(result[j]<temp)
            {
                result[j]++;
                continue;
            }
            while(result[j]==temp)
            {
                j--;
                temp--;
            }
            result[j]++;
            for(k=j+1; k<8; k++)
            {
                result[k] = result[k-1] + 1;

            }
        }
    }
    return 0;
}
