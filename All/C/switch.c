#include<stdio.h>
main()
{
    char ch;
    printf("enter letter: ");
    ch=getche();
    switch(ch)
    {
        case 'a' :
        case 'e' :
        case 'i' :
        case 'o' :
        case 'u' :
            printf("\nvowel");
            break;
            default:
            printf("\nconsonant");
    }
    return 0;
}
