#include<stdio.h>
void main()
{
	int a,s,e=0,o=0,z=0;
	scanf("%d",&a,&s);
	while(a>0)
	{
		s=a%10;
		if(s==0)
		{
			z++;
	}
		else if(s%2==0)
		{
			e++;
		}
		else
		{
			o++;
			
		}
		a=a/10;
	}
	printf("%d %d %d",e,o,z);
	
}
     //abhi
