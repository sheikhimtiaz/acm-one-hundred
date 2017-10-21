#include<stdio.h>
#include<math.h>
#define pi 2*acos(0.0)
int main()
{
    int T;
    scanf("%d",&T);
    while(T--)
    {
        double L,W,R,red_area,green_area,round_area,rectangular_area;
        scanf("%lf",&L);
        W=(6*L)/10;
        R=(L/5);
        rectangular_area=L*W;
        round_area=pi*(R*R);
        red_area=round_area;
        green_area=rectangular_area-red_area;
        printf("%.2lf %.2lf\n",red_area,green_area);
    }
    return 0;
}

//12578 10 6 2
