#include<stdio.h>

int main(void)
{
	float value,comms;
	printf("Enter value of trade:");
	scanf("%f",&value);
	
	while(value!=0.0f){
			if(value<2500.00f)
				comms=30.00f+0.017f*value;
			else if(value<6250.00f)
				comms=56.00f+0.0066f*value;
			else if(value<20000.00f)
				comms=76.00f+0.0034f*value;
			else if(value<50000.00f)
				comms=100.00f+0.0022f*value;
			else if(value<500000.00f)
				comms=155.00f+0.0011f*value;
			else
				comms=255.00f+0.0009f*value;
	
			if(comms<39.00f)
				comms=39.00f;
			printf("Commission:$%.2f\n",comms);
			printf("Enter value of trade:");
			scanf("%f",&value);
			
	}
	
	
	//printf("Commission:$%.2f\n",comms);
	
	return 0;
	}
	