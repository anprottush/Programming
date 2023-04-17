#include<stdio.h>
int main()
{
  int i;
  char word[50];
  printf("write a word : ");
  scanf("%s",word);
  for(i=0; i<10; i++)
  printf("%s\t",word);
  return 0;
}
