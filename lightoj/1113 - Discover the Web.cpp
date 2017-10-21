#include<bits/stdc++.h>
using namespace std;
#define pi 2*acos(0.0)
#define READ(f) freopen(f, "r", stdin)
#define WRITE(f) freopen(f, "w", stdout)
#define MAX 10000000
#define modu 1000000007

int main ()
{
    int testcase,cs=1;
    scanf("%d",&testcase);
    while(testcase--)
    {
        printf("Case %d:\n",cs++);
        string temp;
        stack<string> stk,secondaryStk;
        stk.push("http://www.lightoj.com/");
        while(1)
        {
            cin>>temp;
            if(temp=="QUIT")
                break;
            else if(temp=="VISIT")
            {
                string newPage;
                cin>>newPage;
                cout<<newPage<<endl;
                stk.push(newPage);
                while (!secondaryStk.empty())
                {
                    secondaryStk.pop();
                }
            }
            else if(temp=="BACK")
            {
                if(stk.size()==1)
                {
                    printf("Ignored\n");
                }
                else
                {
                    string bt=stk.top();
                    secondaryStk.push(bt);
                    stk.pop();
                    cout<<stk.top()<<endl;
                }

            }
            else if(temp=="FORWARD")
            {
                if(secondaryStk.empty())
                {
                    printf("Ignored\n");
                }
                else
                {
                    string bt=secondaryStk.top();
                    stk.push(bt);
                    secondaryStk.pop();
                    cout<<stk.top()<<endl;
                }
            }
        }
    }
    return 0;
}
