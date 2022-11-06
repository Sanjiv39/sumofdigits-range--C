/*10 - 20
sum every digits between them using loop in loop and remainder
1+0 + 1+1 + 1+2.......*/
#include<stdio.h>
int main()
{
	int x, y;
	int i, n;
	int sum = 0,rem;
	printf("Enter two number: ");
	scanf("%d %d", &x, &y);
	//checking greatest and smallest
	if (x>y)
	{
		i = y;
		n = x;
	}
	else
	{
		n = y;
		i = x;
	}
	//using for loop increasing the numbers
	for(i=i; i<=n; i++)
	{
		int copy = i;
		//using while loop to get remainder and add it into sum repeatedly
		while (copy!=0)
		{
			rem = copy%10;
			printf("rem = %d \n", rem);
			sum = sum + rem;
			printf("sum = %d \n", sum);
			copy = copy/10;
		}
	}
	printf("Final sum = %d", sum);
}
