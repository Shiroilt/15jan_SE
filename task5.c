#include<stdio.h>
int main(){
	int m1,m2,m3,m4,m5;
	float total,a;
	printf("enter any marks");
  scanf("%d",&m1);
  printf("enter any marks");
  scanf("%d",&m2);
  printf("enter any marks");
  scanf("%d",&m3);
  printf("enter any marks");
  scanf("%d",&m4);
  printf("enter any marks");
  scanf("%d",&m5);
  a=m1+m2+m3+m4+m5;
  total=(a*100)/500;
  if(total>=80&&total<100){
  	printf("A");
  }
  else if(total>=60&&total<80){
  	printf("B");
  }
  else if(total>=40&&total<60){
  	printf("C");
  }
  else if(total>=20&&total<40){
  	printf("D");
  }
  else{
  	printf("fail");
  }
  
}
