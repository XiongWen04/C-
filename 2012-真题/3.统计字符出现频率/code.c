#include <stdio.h>

int main()
{
	FILE* f = fopen("w.in","r");
	if(f == NULL)
	{
		printf("文件打开失败\n");
		return 0;
	}
	char c[9999]={0};
	int appear_times[128]={0};
	fscanf(f,"%s",c);
	int i=0;
	while(c[i] != '\0')
	{
		appear_times[c[i]]++;
		i++;
	}
	FILE* wf = fopen("w.out","w");
	for(int i=0;i<128;i++)
	{
		if(appear_times[i]!=0)
			fprintf(wf,"%c:%d\n",i,appear_times[i]);
	}
	fclose(f);
	fclose(wf);
	f=NULL;
	wf=NULL;
	return 0;
}