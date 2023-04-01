#include<stdio.h>
#include<stdlib.h>

#define LEFT 3
#define RIGHT 1000



static void fun(void)
{
	printf("this is fun void111");
	printf("my branch 0");
	printf("my branch 1");
}		

int main()
{	
	int i,j;
	
	for(i = LEFT;i<=RIGHT; i++)
	{
		int mark =1;
		for(j=2;j<=i/2;j++)
		{
			if(i%j == 0)
			{
				mark =0;
				break;
			}
		}
	
		if(mark)
			printf("%d is a primr\n",i);
	}
	
	fun1();

	exit(0);
}
