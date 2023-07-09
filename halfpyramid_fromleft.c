#include<stdio.h>
int main(){
	int i,j,r;
	scanf("%d",&r);
	for(i=0;i<r;i++)
	{	for(j=0;j<=i;j++)
		{	printf("*\t");}
	printf("\n");
	}
	return 0;
}
