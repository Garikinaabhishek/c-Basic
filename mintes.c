#include<stdio.h>
main()
{
int h,m,m1;
printf("enterminutes");
scanf("%d",&m1);
h=m1/60;
m=(m1-(h*60));
printf("%d hour(s) %d minute(s)",h,m);
	
}
