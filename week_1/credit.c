#include <cs50.h>
#include <stdio.h>

int main(void)
{
    unsigned long long credit_num,temp;
    credit_num = get_long("Number: ");
    temp = credit_num;
    int i=0,n=0,sum_odd=0,sum_even=0;
    int arr[20];
    int temp_element;
    int sum;
    while(temp>0)
    {
        arr[n]=temp%10;
        temp/=10;
        n++;
    }
    //  printf("n: %d\n",n);
    for (i=1; i<n; i+=2)
    {
        //  printf("%d  ",arr[i]);
        if (arr[i]<5)
            sum_odd+=(arr[i]*2)%10;
        else
        {
            sum_odd= sum_odd + ((arr[i]*2)%10) + ((arr[i]*2)/10);
        }
    }
    // printf("sum_odd : %d\n",sum_odd);
    for (i=0; i<n; i+=2)
    {
        sum_even+=arr[i];
        //  printf("%d  \n",arr[i]);
    }
    //  printf("sum_even : %d\n",sum_even);

    if (((sum_even+sum_odd)%10 != 0))
    {

        printf("INVALID\n");
        return 0;
    }
    if (n == 13)
    {
        if (arr[12] == 4)
        {
            printf("VISA\n");
        }
        else
            printf("INVALID\n");
    }
    else if (n == 15)
    {
        sum= arr[13] + arr[14]*10;
        if(sum == 37 || sum == 34)
            printf("AMEX\n");
        else
            printf("INVALID\n");
    }
    else if (n == 16)
    {
        if (arr[15] == 4)
        {
            printf("VISA\n");
            return 0;
        }

        sum = arr[14] + arr[15]*10;
        if(sum>=51&&sum<=55)
            printf("MASTERCARD\n");
        else
            printf("INVALID\n");
    }
    else
        printf("INVALID\n");
}
