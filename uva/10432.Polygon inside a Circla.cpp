#include<stdio.h>
#include<math.h>
#define pi 2*acos(0.0)
int main()
{
    double radius,sides;
    while(scanf("%lf %lf",&radius,&sides)!=EOF)
    {
        double areaOfpolygon,wd,ln,sq,areaOfline,areaOfcircle;
        wd=sin(pi/sides);
        ln=cos(pi/sides);
        sq=radius*radius;
        areaOfpolygon=sq*sides*wd*ln;
        printf("%.3lf\n",areaOfpolygon);
    }
    return 0;
}
