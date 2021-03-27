#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a,b ;
    printf("else if tutorial:)\n ");
    printf("Have you passed your Maths exam?\n");
    printf("Press 1 for YES, 2 for NO\n");
    scanf( "%d",&a );
    printf("Have you Passed Your Science Exam?\n");
    printf("Press 1 for YES, 2 for NO\n");
    scanf("%d", &b);
    if (a==1 && b==1)
    {
        printf("You will recieve 45rs. Prize, Congratulations");
    }
    else if ((a==1)||(b==1))
    {
        printf("You will recieve 15rs. Prize, Congratulations");
    }
    else
    {
        printf("Better Luck Next time");
    }
    
    

    
    return 0;
}
