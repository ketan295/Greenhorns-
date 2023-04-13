#include<stdio.h>

main()

{
	int a , b ,temp ;
	printf("enter the value of a :");
	scanf("%d",&a);
	printf("enter the value of b :");
	scanf("%d",&b); 
	
    a=a+b;
	b=a-b;
	a=a-b;
	
	printf("\nafter swapping value of a is : %d \n ",a);
	printf("after swapping value of b is : %d ",b);
	 

}
