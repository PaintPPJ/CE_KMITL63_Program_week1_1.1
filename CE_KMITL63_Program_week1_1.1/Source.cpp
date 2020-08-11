#include<iostream>
using namespace std;
#define N 600851475143
int main()
{
	long x, n, count;
	x = 2;
	while (x <= N)
	{
		count = 0;
		if (N % x == 0 && x != N)
		{
			for (n = 2; n < x; n++)
			{
				if (x % n == 0)
				{
					count++;
					break;
				}
				else
				{
					count = 0;
				}
			}
			if (count == 0)
			{
				cout << x << " ";
			}
		}
		x++;


	}
	return 0;
}