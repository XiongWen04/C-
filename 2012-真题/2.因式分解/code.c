#include <stdio.h>

int main()
{
	int n,flag=0;
	scanf("%d",&n);
	int fu=0;
	if(n < 0)
	{
		fu = 1;
		n = -n;
	}
	int tmp = n;
	for(int i=2;i<=n;i++)
	{
		if(tmp%i == 0)
		{
			if(flag == 0)
			{
				flag = 1;
				if(fu == 1)
					printf("-");
			}
			else
				printf("*");
			printf("%d",i);
			tmp/=i;
			i--;
		}
	}
	if(n == 0 || n == 1 || n == -1)
		printf("%d",n);
	return 0;
}