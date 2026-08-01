#include <stdio.h>
#include <string.h>
int main()
{
    char cipher[100];
    char plain[100];
    int i, x;
    int aInverse = 9;
    int b = 15;
    printf("Enter Cipher Text (UPPERCASE): ");
    scanf("%s", cipher);
    for(i = 0; cipher[i] != '\0'; i++)
    {
        if(cipher[i] >= 'A' && cipher[i] <= 'Z')
        {
            x = cipher[i] - 'A';
            x = (aInverse * (x - b + 26)) % 26;
            plain[i] = x + 'A';
        }
        else
        {
            plain[i] = cipher[i];
        }
    }
    plain[i] = '\0';
    printf("\nPlain Text: %s\n", plain);
    return 0;
}