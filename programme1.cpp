#include<stdio.h>
void TOH(int n,char source,char spare,char destination)
{
	if(n==1)
	{
		printf("move disk 1 from %cto%c\n",source,destination);
		return;
	}
	TOH(n-1,source,destination,spare);
	printf("move disk %d from %c to %c\n",n,source,destination);
	TOH(n-1,spare,source,destination);
}
int main()
{
	int d;
	printf("enter np.of disc");
	scanf("%d",&d);
	if(d<=0){
		printf("invalid input.number of disc must be postive\n");
		return 1;
	}
	printf("steps to solve the TOH problem\n");
	TOH(d,'A','B','C');
	return 0;
	}
