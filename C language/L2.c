//WAP to take 10 no. Input from user and find out . How many Even numbers are there
#include<stdio.h>
main(){
    int a[1000],i,n,even=0,odd=0;
   
    printf("Enter size of the array : ");
    scanf("%d",&n);
 
    printf("Enter elements in array : ");
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
 
     for(i=0; i<n; i++)
    {
          if(a[i]%2==0)
          even++;
          else
          odd++;
		           
    }
     printf("even numbers in array: %d",even);
     printf("\n odd numbers in array: %d",odd);
}
