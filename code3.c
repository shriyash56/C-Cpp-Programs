/*

RUNNING CODE
Enter no. of lines : 5
Enter starting point : 1


1
22
333
4444
55555
55555
4444
333
22
1

*/

#include<stdio.h>
int main()
{
    int n;
    int s;
    printf("Enter no. of lines : ");
    scanf("%d",&n);
    printf("Enter starting point : ");
    scanf("%d",&s);
    printf("\n\n");
    
    
    for(int i=1;i<=n;i++){
        
        for(int j=1;j<=i;j++)
        {
            printf("%d",s);
        }
        s++;
    
    printf("\n");
    }
    
    for(int i=n;i>0;i--)
    {
        s--;
        for(int j=i;j>0;j--)
        printf("%d",s);
        printf("\n");
    }


    return 0;
}