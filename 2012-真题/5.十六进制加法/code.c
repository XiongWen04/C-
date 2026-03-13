#include <stdio.h>
#include <string.h>

char ch[] = {'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
int num[128];

int main()
{
	num['0'] = 0;
	num['1'] = 1;
	num['2'] = 2;
	num['3'] = 3;
	num['4'] = 4;
	num['5'] = 5;
	num['6'] = 6;
	num['7'] = 7;
	num['8'] = 8;
	num['9'] = 9;
	num['A'] = 10;
	num['B'] = 11;
	num['C'] = 12;
	num['D'] = 13;
	num['E'] = 14;
	num['F'] = 15;
	char s1[100]={0},s2[100]={0};
	char res[100] = {0};
	int pos=0;
	scanf("%s %s",s1,s2);
	int sum1=0,sum2=0;
	int len1=strlen(s1),len2=strlen(s2);
	for(int i=0;i<len1;i++)
		sum1 = sum1*16 + num[s1[i]];
	for(int i=0;i<len2;i++)
		sum2 = sum2*16 + num[s2[i]];
	int sum = sum1+sum2;
	while(sum > 0)
	{
		int tmp = sum % 16;
		res[pos++] = ch[tmp];
		sum /= 16;
	}
	for(int i=pos-1;i>=0;i--)
		printf("%c",res[i]);	
	if(pos == 0)
		printf("0");
	return 0;
}