#include<stdio.h>
int main()
{
    char ch;
    printf("enter charecter: ");
    scanf("%c",&ch);
    if(ch==97||ch==101||ch==105||ch==111||ch==117||ch==65||ch==69||ch==73||ch==79||ch==85)
        printf("vowel");
    else if(ch>=48 && ch<=57)
        printf("digit");
        else
            printf("consonent");
    return ch;
}
