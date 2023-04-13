#include<stdio.h>

main()

{
	float BS,HRA,DA,TA,GS;
	
	printf("enater your base salary:\n");
	scanf("%f",&BS);
	printf("enater your HRA:\n");
	scanf("%f",&HRA);
	printf("enater your DA:\n");
	scanf("%f",&DA);
	printf("enater your TA:\n");
	scanf("%f",&TA);
	
	HRA=HRA*BS/100;
	DA=DA*BS/100;
	TA=TA*BS/100;
	
	GS=BS+HRA+DA+TA;
	
	printf("\nyour gross salary is:%.2f",GS);
}
