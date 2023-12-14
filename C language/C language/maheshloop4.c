#include<stdio.h>
main(){
	int i,num,m=0,n=0;
	for(i=1;i<=10;i++){
		printf("Enter your number here : ");
		scanf("%d",&num);
		if(num%2==0){
			printf("\nEven\n");
			m++;
	}else{
		printf("\nodd\n");
		n++;
	}
	}

printf("\nyou got this many even numbers :%d",m);
printf("\nyou got this many odd numbers : %d",n);
}
