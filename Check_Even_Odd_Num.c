#include<stdio.h>
int main()
{
    printf("Hello george\n");
    int a,b,c,d;
    scanf("%d", &a);
     while(a > 0)
     {
         a =  a-2;
     }
     printf("%d\n", a);
     if(a == 0)
     {
         printf("This input is even number\n");
     }
     else if(a < 0)
     {
         printf("This input is odd number\n");
     }
     

    return 0;

}