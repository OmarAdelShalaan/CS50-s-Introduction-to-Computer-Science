#include<stdio.h>

int main(){
int i,j;
int n;
while(1){    
scanf("Height: %d",&n);
    if (n>0)
        break;
}
for(i=0;i<n;i++)
{
    for(j=0;j<n;j++)
    {
     if(n-i-1>j)
            printf(" ");
     else
        printf("#");
    }
    printf("\n");

}


return 0;
}
