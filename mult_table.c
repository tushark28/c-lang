#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a, b, c, d, e, f, g, h, i, j,k   ;
    b=1;
    c=2;
    d=3;
    e=4;
    f=5;
    g=6;
    h=7;
    i=8;
    j=9;
    k=10;
    printf("multiplication table of any number\n");
    printf("Enter the number \a \n");
    scanf("%d" , &a );  
    printf("|%d X 1  =  %-3d |\n",a, a*b);
    printf("|%d X 2  =  %-3d |\n",a, a*c);
    printf("|%d X 3  =  %-3d |\n",a, a*d);
    printf("|%d X 4  =  %-3d |\n",a, a*e);
    printf("|%d X 5  =  %-3d |\n",a, a*f);
    printf("|%d X 6  =  %-3d |\n",a, a*g);
    printf("|%d X 7  =  %-3d |\n",a, a*h);
    printf("|%d X 8  =  %-3d |\n",a, a*i);
    printf("|%d X 9  =  %-3d |\n",a, a*j);
    printf("|%d X 10 =  %-3d |\n",a, a*k);
    printf("Enjoy :)");

    return 0;
}