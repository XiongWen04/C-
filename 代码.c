#include <stdio.h>
#include <stdbool.h>

int three_times(int a,int b,int c)
{
	return a*a*a + b*b*b + c*c*c;
}

bool IsTrue(int n)
{
	int ge = n%10;
	int shi = n%100/10;
	int bai = n/100;
	if(three_times(ge,shi,bai) == n)
		return true;
	return false;
}

int main()
{
	FILE * f = fopen("number.in","r");
	FILE* w = fopen("number.out","w");
	int n;
	fscanf(f,"%d",&n);
	while(n != 0)
	{
		if(IsTrue(n))
			fprintf(w,"T\n");
		else
			fprintf(w,"F\n");
		fscanf(f,"%d",&n);
	}
	fclose(f);
	return 0;
}