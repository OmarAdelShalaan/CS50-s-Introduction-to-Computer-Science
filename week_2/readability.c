#include<cs50.h>
#include<stdio.h>
#include<string.h>

int main()
{
    string str= get_string("Text: ");
    int l=0,s=0;
    int count_c=0,count_s=1,count_w=0;
    int temp=0;
    int i,n=strlen(str);
    float index=0;

    for(i=0;i<n;i++)
    {

        if (str[i]==' ' || str[i]=='!' || str[i]=='\'' || str[i]=='.'||\
        str[i]=='?' || str[i]=='-'|| str[i]==';'|| str[i]==','||\
        str[i]=='\"'|| str[i]==':')
        {
                    if (str[i+2]>= 'A' && str[i+2]<= 'Z')
                                count_s++;
                    if(str[i]=='\''||str[i]=='-')
                                temp++;
                    continue;
        }
        count_c++;

        if(i-temp!=0)
        {
            count_w++;
            temp=i;
        }

        temp++;
    }

    count_w++;

    //printf("c: %d w: %d s: %d\n",count_c,count_w,count_s);

    index=((0.0588 * (count_c*100)/count_w) - (0.296 * (100*count_s)/count_w) - 15.8);
//    printf("Grade %.3f\n",(0.0588 * (count_c*100)/count_w) - (0.296 * (100*count_s)/count_w) - 15.8);

    if(index >=1&& index<=16)
        printf("Grade %.0f\n",index);
    else if((index) < 1)
        printf("Before Grade 1\n");
    else
        printf("Grade 16+\n");

}