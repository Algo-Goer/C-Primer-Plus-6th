#include <stdio.h>
#include <ctype.h>
int char_num(char c);
int main(void)
{
  char ch;
  printf("input an character for anaysis:");
  while((ch=getchar())!=EOF)
   printf("the position of the %c in ABC is:%d\n",ch,char_num(ch));
  printf("Bye!\n");
  return 0;
}
int char_num(char c)
{
  if (isalpha(c)==0)
   return -1;
   else return tolower(c)-'a'+1;
}