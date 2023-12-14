#include<stdio.h>
main()
{
	int i;
	printf ("enter a leap year");
	scanf ("%d ",&i);
	if (i % 100==0)
	{
		if (i % 400==0)
		printf ("year is leap year");
		else
		printf ("year is not leap year");
		}
		else
		{
			
		}
		
	}
}

