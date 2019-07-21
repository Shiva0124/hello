#include<stdio.h>

int main(void)
{
	/*int i,n;
	
	printf("This program prints a table of square.\n");
	printf("Enter number of entries in table:");
	scanf("%d",&n);
	
	i=1;
	while(i<=n){
		printf("%10d%10d\n",i,i*i);
	    i++;}*/
		
	int n,sum=0;
	
	printf("This program sums a series of integers.\n");
	printf("Enter integers (0 to terminate):");
	
	scanf("%d",&n);
	while(n!=0){
		sum+=n;
		scanf("%d",&n);
		
		
	
	}
	printf("The sum is:%d\n",sum);
	
	return 0;
}