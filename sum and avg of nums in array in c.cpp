#include<stdio.h>
#include<conio.h>
int main()
{
	int s=0,n,i;
	float x[50],avg=0;
	printf("\n How many values?");
	scanf("%d",&n);
	printf("\n Enter 10 vals in list: \n");
	for(i=0;i<n;i++)
	{
		scanf("%f",&x[i]);
		s=s+x[i];
	}
	
	avg=s/n;
	printf("\nThe sum is=%d",s);
	printf("\nThe avg is=%f",avg);
	return 0;
}