#include <stdio.h>
main()
{
    float c,f,d;

    printf("Press 1 for calculate fahrenheit or press 2 for calculate celsius:\n");
    scanf("%f",&d);
    if(d == 1)
        {printf("Temparature in celsius:");
        scanf("%f",&c);
        f=(1.8*c+32);
        printf("Temparature in Fahrenheit:%f",f);
        }
    else if(d == 2)
            {printf("Temparature in Fahrenheit:");
            scanf("%f",&f);
            c=(5.0/9.0)*(f-32);
            printf("Temparature in Celsius:%f",c);
            }

    return 0;
}





