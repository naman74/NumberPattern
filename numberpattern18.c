#include<stdio.h>
int main()
{
	int i,j,n;
	printf("Enter the value of n");
	scanf("%d",&n);
	for(i=n;i>=1;i--)
	{
		for(j=n-1;j>=i;j--)
		{
		  printf("%d",j+1);	
		}
		for(j=1;j<=2*i-1;j++)
		{
		  printf("%d",i);	
		}
		for(j=i+1;j<=n;j++)
		{
			printf("%d",j);
		}
		printf("\n");
	}
	for(i=1;i<n;i++)
	{
		for(j=n;j>i;j--)
		{
			printf("%d",j);
		}
		for(j=1;j<=2*i-1;j++)
		{
			printf("%d",i+1);
		}
		for(j=1;j<=n-i;j++)
		{
			printf("%d",j+i);
		}
		printf("\n");
        
	}

}
