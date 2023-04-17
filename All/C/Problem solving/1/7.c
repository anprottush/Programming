#include<stdio.h>
int main()
{
    char alphabet;
    printf("enter alphabet: ");
    scanf("%c",&alphabet);
    switch(alphabet)
    {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
              printf("alphabet is a vowel\n");
        break;
        default:
            printf("alphabet is a consonant");
    }
    return 0;
}
