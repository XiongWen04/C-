#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

//注意小于0时回文数判断和0时的回文数判断
bool Is_HW(int n)
{
	int tmp = n;
	int count = 0;
	while(tmp != 0)
	{
		count++;
		tmp /= 10;
	}
	
	char*c = (char*)malloc(sizeof(char)*count);
	memset(c,0,sizeof(char)*count);
	int pos = 0;
	while(n != 0)
	{
		c[pos++] = (n%10)+'0';
		n/=10;
	}
	int i=0,j=pos-1;
	while(i<j)
	{
		if(c[i] != c[j])
			return false;
		i++;
		j--;
	}
	free(c);
	return true;
}

int main()
{
	int N;
	scanf("%d",&N);
	if(Is_HW(N) && N >= 0)
		printf("YES\n");
	else
		printf("NO\n");
	return 0;
}