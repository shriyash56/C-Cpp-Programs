
/*

RUNNING CODE
Enter no. of lines : 5


1
3*2
4*5*6
10*9*8*7
  
*/

#include<stdio.h>
int main()
{
    int n;

    printf("Enter no. of lines : ");
    scanf("%d",&n);
    printf("\n\n");
    int x=1;
    for(int i=1;i<=n;i++){
        if(i%2!=0){
        for(int j=1;j<i;j++)
        {
            printf("%d",x);
            printf("*");
            x++;
        }
        printf("%d",x);
        x++;
    }
    else{
        for(int k=x+i-1;k>x;k--)
        {
            printf("%d",k);
            printf("*");
        }
        printf("%d",x);
        x=x+i;
    }
    printf("\n");
    }
    return 0;
}
