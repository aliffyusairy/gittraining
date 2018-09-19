#include<stdio.h>
void main(void)
{
	int Num[10]={1,0,4,9,5,7,3,2,6,8};
	int Ans[10],i,j,temp=0;
	for(i=0;i<10;i++)
	{
		for(j=0;j<10;j++)
		{
			if(Num[j]<temp)
			{
				Ans[i]=temp=Num[j];
			}
		}
	}
	for(j=0;j<10;j++)
	printf("%d\n",Ans[j]);
}
