#include<stdio.h>

int power(int x,int y);

void main()
{	
	int x,y;
	printf("Enter Number : ");
	scanf("%d",&x);
	printf("Enter Power : ");
	scanf("%d",&y);
	power(x,y);
	
}

int power(int x,int y)
{
	if(y==0)
	return 1;
	else
	printf("%d",return(x*power(x,y-1)));
	
}
