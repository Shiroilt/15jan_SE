#include<stdio.h>
int main(){
	float a,r,p=3.14,l,b,sum;
	char ch;
	printf("enter any char to get area of Triangle=t, Rectangle=s and Circle=c ");
	scanf("%c",&ch);
	switch(ch){
		case 'T':
		case 't':
			printf("enter triangle element");
			scanf("%f",&a);
			sum=a*a*a;
			printf("%f",sum);
			break;
		case 'S':
		case 's':
			printf("enter rectangle element");
			scanf("%f",&l);
			scanf("%f",&b);
			sum=2*(l*b);
			printf("%f",sum);
			break;
		case 'c':
		case 'C':
		printf("enter cricle element");
			scanf("%f",&r);
			sum=p*r*r;
			printf("%f",sum);
			break;
		default:
			printf("somthing wrong");
	}
	return 0;
}
