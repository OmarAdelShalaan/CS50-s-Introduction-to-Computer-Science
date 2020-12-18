#include<cs50.h>
#include<stdio.h>
#include<string.h>

int main(int argc, string argv[])
{
    if (argc == 2)
    {
        string K = argv[1] ;
        int i = 0, k = 0;
        while (K[i] != '\0')
        {
            if (K[i] >= '0' && K[i] <= '9')
            {
                k = k * 10 + (K[i] - '0');
                i++;
            }
            else
            {
                printf("Usage: ./caesar %s\n", argv[1]);
                //printf("Usage: ./caesar key\n");
                return 1;
            }
        }
        string str = get_string("plaintext: ");
        int l = 0;
        int n = strlen(str);
        char str_c[n + 1];
        char temp;
        for (i = 0; i < n ; i++)
        {
            temp = str[i];
            if (temp >= 'A' && temp <= 'Z')
                str_c[i] = (char)((temp+ k - 65) % 26 + 65);
            else if (temp >= 'a' && temp <= 'z')
                str_c[i] = (char)((temp+ k - 97) % 26 + 97);
            else
                  str_c[i] = temp;

        }
        str_c[i] = '\0';
        printf("ciphertext: %s\n", str_c);
    }
    else
    {

        int i = 1;
        printf("Usage: ./caesar ");
        while (argv[i] != 0)
        {
            printf("%s ", argv[i]);
            i++;
        }
        printf("\n");

        //printf("Usage: ./caesar key\n");
        return 1;
    }
    return 0;
}
