#include<bits/stdc++.h>
#define pi 2*acos(0.0)
using namespace std;

int main ()
{
    char line[25];
    while(gets(line))
    {
        int length=strlen(line),i,j,number,Temp;
        for(i=0;i<length;i++)
        {
            number=line[i]-'0';
            if(i==0 && number==9)
                printf("%d",number);
            if(number>4)
                printf("%d",9-number);
            else
                printf("%d",number);
        }
        printf("\n");
    }
    return 0;
}
