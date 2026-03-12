#include <stdio.h>
#include <stdlib.h>

int cmp(const void* a,const void* b)
{
	int* v1 = (int*)a;
	int* v2 = (int*)b;
	return *v2 - *v1;
}

int main()
{
	int num[105] = {0};
	int n = 0,count=0,sum=0;
	while(scanf("%d",&n) != EOF)
	{
		sum += n;
		num[count++] = n;
	}
	qsort(num,count,sizeof(int),cmp);
	sum = sum-num[0]-num[count-1];
	printf("%f",((sum*1.0)/(count-2)));
	return 0;
}