#include <stdio.h>
#include <stdlib.h>

int main()
{
	int x;
	
	printf("Enter the value:");
	scanf("%d",&x);
	
	if(x%2 == 0)
	{
		printf("Its a even no");
	}
    else
    {
    	printf("Its a odd number");
	}
	
	return 0;
}
