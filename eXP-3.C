#include <stdio.h>
char key[5][5] = {
    {'M','O','N','A','R'},
    {'C','H','Y','B','D'},
    {'E','F','G','I','K'},
    {'L','P','Q','S','T'},
    {'U','V','W','X','Z'}
};
int main()
{
    char a, b;
    int i, j, r1, c1, r2, c2;
    printf("Enter two uppercase letters: ");
    scanf(" %c%c", &a, &b);
    for(i = 0; i < 5; i++)
    {
        for(j = 0; j < 5; j++)
        {
            if(key[i][j] == a)
            {
                r1 = i;
                c1 = j;
            }
            if(key[i][j] == b)
            {
                r2 = i;
                c2 = j;
            }
        }
    }
    if(r1 == r2)
    {
        printf("Cipher: %c%c", key[r1][(c1 + 1) % 5], key[r2][(c2 + 1) % 5]);
    }
    else if(c1 == c2)
    {
        printf("Cipher: %c%c", key[(r1 + 1) % 5][c1], key[(r2 + 1) % 5][c2]);
    }
    else
    {
        printf("Cipher: %c%c", key[r1][c2], key[r2][c1]);
    }
    return 0;
}