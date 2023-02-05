#include <math.h>
#include <stdio.h>
int main()
{
  int i,f=0,j;
  printf("enter any num");
  scanf("%d",&i);
  if(i==1||i==0){
  	f++;
  }
  for( j=2;j<i/2;j++){
  	if(i%2==0){
  		f++;
  		break;
	  }
  }
  if(f==0){
  	printf("prime num");
  }
  else{
  	printf("not prime");
  }
    return 0;
}

