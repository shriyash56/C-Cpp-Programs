/*
Running code
Enter no. of lines : 5
11112
32222
33334
54444
55556

*/
#include<stdio.h>
int main()
{
    int i,j,n;

    printf("Enter no. of lines : ");
    scanf("%d",&n);
    
    
    for(i=1; i <= n ;i++)
    {
        if(i%2!=0){
            for(j=0;j<4;j++)
            printf("%d",i);
            printf("%d",i+1);
        }
        else{
         printf("%d",i+1);
         for(j=0;j<4;j++)
            printf("%d",i);
        }
    printf("\n");
    }
    return 0;
}

