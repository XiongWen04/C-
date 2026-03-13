#include <stdio.h>

int main()
{
	int n,arr[9999]={0},pos=0;
	scanf("%d",&n);
	int tmp = n;
	if(n>0)
	{
		while(tmp>0)
		{
			arr[pos++] = tmp%2;
			tmp/=2;
		}
		for(int i=pos-1;i>=0;i--)
			printf("%d",arr[i]);
	}
	else if(n == 0)
		printf("0\n");
	return 0;
}