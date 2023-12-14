#include<stdio.h>
main()
{
	int n, i = 1, ev=0, od=0, evsum=0, odsum=0;
	printf ("Enter end value : ");
	scanf ("%d",&n);
	while (i<=n)
	{
		if (i%2==0)
		{
			printf ("\n%d : this number is even",i);
			ev++;
			evsum = evsum+i;
		}
		
		else
		{
			printf("\n%d : this number is odd");
			od+=i;
			
		}
		
		i++; 
	   
	}
	
	printf("\nEven count : %d",ev);
	printf("\nodd count : %d",odd),
	}
