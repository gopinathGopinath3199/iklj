#include<studio.h>
#include<conio.h>
void main()
{
char n;
printf("enter the word");
scanf("%c",&n);
if(n=='a'||n=='e'||n=='i'||n=='o'||n=='u')
{
printf("vowels");
}
else
{
printf("invalid");
}
getch();
}
