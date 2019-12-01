#include <stdio.h>
main()
{
    FILE  *fp;

    fp = fopen ("pstu.txt", "w+");
    fprint(fp,"PSTU This is testing for fprint...\n");
    fputs("this is testing for fputs...\n", fp);
    fclose(fp);

}
