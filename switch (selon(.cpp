#include<stdio.h>
main(){
	float a,b,r;
	char oper;
printf("introduire l oper:");
scanf("%c",&oper);
printf("donne la valeur de a:");
scanf("%f",&a);
printf("donne la valeur de b:");
scanf("%f",&b);
	switch (oper){
	case '+': r=a+b;
	printf("r est %f\n",r);
	break;
	case'*': r=a*b;
	printf("r est %f\n",r);
	break;
	case'-': r=a-b;
	printf("r est %f\n",r);
	break;
	case'/':if (b!=0){
		r=a/b;
		printf("r est %f\n",r);}
		else printf("erreur");
	break;
	default:printf("erreuur");
	}
}
