#include<stdio.h>
#include<conio.h>
void main(){
	int y;
	printf("enter a leapyear");
	scanf("%d",&y);
	if(y%100==0){
		
		if(y%400==0)
		printf("year is leapyear");
		else
		printf("year is not leapyear");
	}
	else
	{
	if(y%4==0)
	printf("year is leapyear");
	else
	printf("year is not leapyear");	
	}
	getch();
	}
