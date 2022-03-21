#include <stdio.h>
#include <conio.h>
void main ()
{
clrscr();
int a=-1,b=1,test,n,i,c;
c=a+b;
printf(" ente your range ");
scanf(" %d",&n);
printf(" %d %d",a,b);
for(i=1;i<n;i++)
{
c=a+b;
printf(" %d",c);
a=b;
b=c;

}
getch();


}