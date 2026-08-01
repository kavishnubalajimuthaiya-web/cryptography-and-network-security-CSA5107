#include <stdio.h>
int main()
{
    char plain[100], cipher[100];
    char key[] = "QWERTYUIOPASDFGHJKLZXCVBNM";
    int i;
    printf("Enter plaintext (UPPERCASE): ");
    scanf("%s", plain);
    for(i = 0; plain[i] != '\0'; i++)
    {
        cipher[i] = key[plain[i] - 'A'];
    }
    cipher[i] = '\0';
    printf("Cipher Text: %s", cipher);
    return 0;
}