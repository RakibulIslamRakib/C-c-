#include <stdio.h>
main()
{
    double x1,y1,x2,y2,d;
    scanf("%lf %lf\n%lf %lf",&x1,&y1,&x2,&y2);
    d=sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
    printf("%.4lf\n",d);
    return 0;
}
