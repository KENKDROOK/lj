#include<stdio.h>
#include<conio.h>
void main()
{
int n,i,c=0;
printf("Enter the integer");
scanf("%d", &n);
for(i=1;i<=n;i++)
{
    if(n%i==0)
    {
        c++;
    }
}
if(c==2)
{
printf("YES");
}
else
{
printf("NO");
}
getch();
}
