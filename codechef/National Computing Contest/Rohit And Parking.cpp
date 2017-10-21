#include<bits/stdc++.h>
#define pi 2*acos(0.0)
#define READ(f) freopen(f, "r", stdin)
#define WRITE(f) freopen(f, "w", stdout)
#define MAX 10000000
using namespace std;

int main ()
{
    int tc;
    scanf("%d",&tc);
    while(tc--)
    {
        int arr[14][62],prr[14][62];
        int q,n,temp,i,j,k,ans,query,currentN,hh,mm;
        scanf("%d%d",&q,&n);
        for(j=0; j<13; j++)
            for(k=0; k<62; k++)
                arr[j][k] = n;
        for(j=0; j<13; j++)
            for(k=0; k<62; k++)
                prr[j][k] = n;
        for(i=0; i<q; i++)
        {
            scanf("%d",&query);
            string temp1,temp2;
            cin>>temp1>>temp2;
            hh=(temp1[0]-'0')*10 + (temp1[1]-'0')*1;
            mm=(temp1[3]-'0')*10 + (temp1[4]-'0')*1;
            if(query==3)
            {
                if(temp2=="AM")
                {
                    printf("%d\n",arr[hh][mm]);
                    continue;
                }
                else if(temp2=="PM");
                {
                    printf("%d\n",prr[hh][mm]);
                    continue;
                }
            }
            else
            {
                cin>>currentN;
                if(temp2=="AM")
                {
                    for(j=hh; j<14; j++)
                    {
                        if(j==hh) k=mm;
                        else k=0;
                        for(; k<62; k++)
                        {
                            if(query==1)
                                arr[j][k] += currentN;
                            else if(query==2)
                                arr[j][k] -= currentN;
                        }
                    }
                    if(query==1) temp=prr[0][0]+currentN;
                    else if(query==2) temp=prr[0][0]-currentN;
                    for(j=0; j<13; j++)
                        for(k=0; k<62; k++)
                            prr[j][k] = temp;
                }
                else
                {
                    for(j=hh; j<14; j++)
                    {
                        if(j==hh) k=mm;
                        else k=0;
                        for(; k<62; k++)
                        {
                            if(query==1)
                                prr[j][k] += currentN;
                            else if(query==2)
                                prr[j][k] -= currentN;
                        }
                    }
                }
            }
        }
    }
    return 0;
}
