 #include<stdio.h>
void main()
{
	int marks, attendance;
	scanf("%d",&marks);
	if(marks>=50)
	{
		if(attendance>=25)
		{
			printf("pass");
		}
		else
		printf("your attendance are low");
		
		}	
		else
		printf("fail");
		getch();
}
