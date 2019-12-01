#include <stdio.h>
int main ()
{
 float b,e,m,p,c,bi,GPA;
 printf("bangla :");
 scanf ("%f",&b);
 printf ("english :");
 scanf ("%f", &e);
 printf("math :");
 scanf ("%f", &m);
 printf ("physics :");
 scanf ("%f",&p);
 printf ("chemistry :");
 scanf ("%f",&c);
 printf ("biology :");
 scanf ("%f",&bi);
 if (b>=80){
    printf ("GPA in Bangla = 5.00\n");
    b=5.00;
 }
 else if (b>=70 &&b<80){
    printf ("GPA in Bangla=4.50\n");
    b=4.50;
 }
    else if (b>=60 &&b<70){
    printf ("GPA in Bangla=4.00\n");
    b=4.00;
    }
    else if (b>=50 &&b<60){
    printf ("GPA in Bangla=3.50\n");
    b=3.50;
    }
 else if (b>=40 &&b<50){
    printf ("GPA in Bangla=3.00\n");
    b=3.00;
 }
    else{
    printf ("GPA in Bangla=0.00\n");
    b=0.00;
    }
if (e>=80){
    printf ("GPA in English= 5.00\n");
    e=5.00;
}
 else if (e>=70 &&e<80){
    printf ("GPA in English =4.50\n");
    e=4.50;
 }
else if (e>=60 &&e<70){
    printf ("GPA in English =4.00\n");
    e=4.00;
}
else if (e>=50 &&e<60){
    printf ("GPA in English =3.50\n");
    e=3.50;
}
else if (e>=40 &&e<50){
    printf ("GPA in English =3.00\n");
    e=3.00;
}
else{
    printf ("GPA in English =0.00\n");
    e=0.00;
}
if (m>=80){
    printf ("GPA in Mathematics = 5.00\n");
    m=5.00;
}
 else if (m>=70 &&m<80){
    printf ("GPA in Mathematics =4.50\n");
    m=4.50;
 }
else if (m>=60 &&m<70){
    printf ("GPA in Mathematics =4.00\n");
    m=4.00;
}
else if (m>=50 &&m<60){
    printf ("GPA in Mathematics =3.50\n");
    m=3.50;
}
 else if (m>=40 &&m<50){
    printf ("GPA in Mathematics =3.00\n");
    m=3.00;
 }
else{
    printf ("GPA in Mathematics =0.00\n");
    m=0.00;
}
    if (p>=80){
    printf ("GPA in physics = 5.00\n");
    p=5.00;
    }
 else if (p>=70 &&p<80){
    printf ("GPA in physics =4.50\n");
     p=4.50;
 }
    else if (p>=60 &&p<70){
    printf ("GPA in physics =4.00\n");
     p=4.00;
    }
    else if (p>=50 &&p<60){
    printf ("GPA in physics =3.50\n");
     p=3.50;
    }
 else if (p>=40 &&p<50){
    printf ("GPA in physics =3.00\n");
     p=3.00;
 }
    else{
    printf ("GPA in physics =0.00\n");
     p=0.00;
    }
if (c>=80){
    printf ("GPA in Chemistry = 5.00\n");
    c=5.00;
}
 else if (c>=70 &&c<80){
    printf ("GPA in Chemistry =4.50\n");
    c=4.50;
 }
    else if (c>=60 &&c<70){
    printf ("GPA in Chemistry  =4.00\n");
    c=4.00;
    }
    else if (c>=50 &&c<60){
    printf ("GPA in Chemistry =3.50\n");
    c=3.50;
    }
 else if (c>=40 &&c<50){
    printf ("GPA in Chemistry =3.00\n");
    c=3.00;
 }
    else{
    printf ("GPA in Chemistry =0.00\n");
    c=0.00;
    }
    if (bi>=80){
    printf ("GPA in Biology = 5.00\n");
    bi=5.00;
    }
 else if (bi>=70 &&bi<80){
    printf ("GPA in Biology =4.50\n");
     bi=4.50;
 }
    else if (bi>=60 &&bi<70){
    printf ("GPA in Biology =4.00\n");
     bi=4.00;
    }
    else if (bi>=50 &&bi<60){
    printf ("GPA in Biology =3.50\n");
     bi=3.50;
    }
 else if (bi>=40 &&bi<50){
    printf ("GPA in Biology =3.00\n");
     bi=3.00;
 }
else{
    printf ("GPA in Biology =0.00\n");
     bi=0.00;
}

if(b==0.00||e==0.00||m==0.00||p==0.00||c==0.00||bi==0.00){
    printf("You are fail\n");
}

else{
   GPA=(b+e+m+p+c+bi)/6;
   printf("Your GPA is = %f\n ",GPA) ;

}

    return 0;
}
