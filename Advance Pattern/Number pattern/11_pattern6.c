/*
1
1 2
1 2 3
1 2 3 4
1 2 3 4 5
1 2 3 4
1 2 3
1 2
1
*/
#include<stdio.h>
int main()
{
    int a;
    printf("Enter the value:");
    scanf("%d",&a);
    for(int i=1;i<a;i++){
        for(int j=1;j<=i;j++){
            printf("%d ",j);
        }
        printf("\n");
    }
    for(int i=a;i>0;i--){
        for(int j=1;j<=i;j++){
            printf("%d ",j);
        }
        printf("\n");
    }
    return 0;
}