#include  <stdio.h>
main(){
	
	int y;
	printf("enter a leap year");
	scanf("%d",&y);
	if(y%100==0)
	{
		if(y%400==0)
		printf("year is leap year");
		else
		printf("year is not leap year");
	}
	else
	{
		if(y%4==0)
		printf("year is leap year");
		else
		printf("year is not leap year");
		
	}
getch();
}

