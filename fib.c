#include<stdio.h>
int main(){
	int fib_number[40]={0,1};
	int i;
	
	printf("please input i[0],i[1]:\n");
	scanf("%d %d",&fib_number[0],&fib_number[1]);
	for(i=2;i<40;i++)
	
		fib_number[i]=fib_number[i-2]+fib_number[i-1];
	for(i=0;i<40;i++)
	{
		if(i%5==0)
			printf("\n");
		printf("%12d",fib_number[i]);
	} 	
    
		
	return 0;
}
/*int main()
{
	int i;
	int f[40]={0,1};
	for(i=2;i<40;i++)
		f[i]=f[i-2]+f[i-1];
	for(i=0;i<40;i++)
	{
		if(i%5==0)
			printf("\n");
		printf("%12d",f[i]);
	} 
	printf("\n");
	return 0;
}*/
