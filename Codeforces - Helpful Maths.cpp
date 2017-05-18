#include<stdio.h>
#include<string.h>
int main()
{
int i,j,len,temp;
char s[101];
scanf("%s",s);
len=strlen(s);
for(i=0;i<len;i+=2)
{
	for(j=i+2;j<len;j+=2)
		if(s[j]<s[i])
		{
			temp=s[i];
			s[i]=s[j];
			s[j]=temp;
		}

}
printf("%s\n",s);
}
