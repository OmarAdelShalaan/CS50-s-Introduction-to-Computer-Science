#include<stdio.h>

int main(){
int i,j;
int n;
scanf("%d",&n);
for(i=0;i<n;i++)
{
    for(j=0;j<n;j++)
    {
     if(n-i-1>j)
            printf(" ");
     else
        printf("#");
    }
    printf("  ");
    for(j=0;j<n;j++)
    {
     if(i>=j)
            printf("#");
     else
        printf(" ");
    }
    printf("\n");

}


return 0;
}