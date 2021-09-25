//  45.จงเขียนฟังก์ชั่น factorial (Level 3)
#define _CRT_SECURE_NO_WARNINGS
#include<iostream>


int fac(int x)
{
	int sum=1,i;
	for (i = 1; i <= x; i++)
	{
		sum *= i;
	}

	return sum;


}

int main()
{
	int x;
	scanf("%d", &x);
	printf("%d",fac(x));
	

}