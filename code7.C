
/*
RUNNING CODE
Enter no. of lines : 5


1
2*3
4*5*6
7*8*9*10
11*12*13*14*15
11*12*13*14*15
7*8*9*10
4*5*6
2*3
1

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
        
        for(int j=1;j<i;j++)
        {
            printf("%d",x);
            printf("*");
            x++;
        }
        printf("%d",x);
        x++;
    
    printf("\n");
}
int k=n;
for(int i=0;i<n;i++)
{
    for(int j=k;j>1;j--){
        printf("%d",x-j);
        printf("*");
    }
    printf("%d",x-1);
    x=x-k;
    k--;
    printf("\n");
}
    return 0;
}