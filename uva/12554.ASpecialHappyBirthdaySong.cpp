#include<stdio.h>
#include<string.h>
int main()
{
    int n,i,j=0,k=0;
    char c;
    scanf("%d\n",&n,&c);
    char names[200][500];
    char song[16][50]={"Happy","birthday","to","you","Happy","birthday","to",
    "you","Happy","birthday","to","Rujia","Happy","birthday","to","you"};
    for(i=0;i<n;i++)
        scanf("%s",names[i]);
    int kcnt=0,jcnt=0;
    while(1)
    {
        if(j==n)
        {
            j=0;
            jcnt++;
        }
        if(k==16)
        {
            k=0;
            kcnt++;
        }
        if(kcnt>0 && jcnt>0 && k==0) break;
        printf("%s: %s\n",names[j],song[k]);
        j++;
        k++;
    }
    return 0;
}
