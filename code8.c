
/*
RUNNING CODE
Enter no. of lines : 5


1*2*3*4*5*26*27*28*29*30
  6*7*8*9*22*23*24*25
    10*11*12*19*20*21
      13*14*17*18
        15*16

*/

#include<stdio.h>
int main()
{
    int i,j,n;

    printf("Enter no. of lines : ");
    scanf("%d",&n);
    printf("\n\n");
    int x=1;
    int y=n;
    int w=n;
    int z=n*(n+1);
    for(i=1; i <= n ;i++)
    {
        for(j=1;j<i;j++)
        printf("  ");
        for(int k=0;k<y;k++){
            printf("%d",x);
            printf("*");
            x++;
        }

        y--;
        
        for(int l=z-w+1;l<z;l++){
            printf("%d",l);
            printf("*");
        }
        printf("%d",z);
        printf("\n");
        z=z-w;
        w--;
    }
    return 0;
}