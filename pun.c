#include<stdio.h>


int main(void)
{
	/*
	 *
	 *6.1
	 */
	/*float max,n;
	
	printf("Enter a number:");
	scanf("%f",&n);
	max=n;
	
	while(1)
	{
		printf("Enter a number:");
		scanf("%f",&n);
		if(n>max)
			max=n;
		if(n<=0)
			break;		
	}
	printf("The largest number entered was %f",max);
	
	/*
	 *
	 *6.2
	 */
	/* int m,n,a;
	 printf("Enter two integers:");
	 scanf("%d %d",&m,&n);
	 while(n!=0){
			 a=n;
			 n=m%n;
			 m=a;
	 }
	 printf("Greatest common divisor:%d",m);
		*/
	
	
	/*
	 *
	 *6.3
	 */
	 /*int m,n,a,u,d;
	 printf("Enter a fraction:");
	 scanf("%d/%d",&u,&d);
	 m=u;
	 n=d;
	 while(n!=0){
			 a=n;
			 n=m%n;
			 m=a;
	 }
	 printf("In lowest terms:%d/%d",u/m,d/m);
	*/
	
	/*6.6*/
	/*int n,i;
	
	printf("Please input a number:");
	scanf("%d",&n);
	for(i=2;i*i<=n;i+=2)
		printf("%d\n",i*i);*/
	/*int x,y,z;
	x=y=1;
	z=(x+=y+4,y+2);
	printf("%d\n",z);*/
	/*int m=10,n=10;
	m=n++;
	printf("%d %d",m,n);*/
	int x=6,y;
	y=x;
	x=y==6;
	printf("%d",x);
	return 0;
	}
	
