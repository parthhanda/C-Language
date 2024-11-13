#include<stdio.h>
int main() 
{
int i,a[10],n,pos=0,neg=0;
	for(i=0;i<10;i++)
	{
	scanf("%d",&a[i]);
		if(a[i]<0)
		{
			neg++;
		}
		else
		{
			pos++;	
		}
	}
	printf("%d\n%d",pos,neg);
    return 0;
}
