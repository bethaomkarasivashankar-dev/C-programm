#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *fp;
	char ch;
	fp=fopen("123pointer.cpp",'r');
	if(fp==NULL)
	{
		printf("file does't exist ");
		exit (0);
	}
	ch=fgetc(fp);
	while (ch!=EOF)
	{
		printf("%c",ch);
		ch=fgetc(fp);
	}
	fclose(fp);
	return 0;
	}

