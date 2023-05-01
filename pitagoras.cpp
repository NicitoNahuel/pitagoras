#include <stdio.h>
#include <math.h>
int a,b,c,n=500,count;
main ()
{
for (a=1;a<=n;a++)
	{
		for (b=a;b<=n;b++)
		{
			c=sqrt(a*a+b*b);
			if (a*a+b*b==c*c && c<=500)
			{
				count=count+1;
				printf ("\n %d, %d, %d: %d", a, b, c, count);
			}
		}
	}
}