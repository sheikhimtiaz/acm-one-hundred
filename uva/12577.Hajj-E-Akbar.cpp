#include<stdio.h>
#include<string.h>
int main()
{
    int i=1;
    while(1)
    {
        char ch[50];
        scanf("%s",ch);
        if(ch[0]=='*') break;
        if(ch[0]=='H') printf("Case %d: Hajj-e-Akbar\n",i);
        else if(ch[0]=='U') printf("Case %d: Hajj-e-Asghar\n",i);
        i++;
    }
    return 0;
}
