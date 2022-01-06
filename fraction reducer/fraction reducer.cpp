

#include <iostream>
using namespace std;
#include <conio.h>
#include <string>
#include <stdio.h>

int GCF(int num1, int num2)
{
	int  gcf = 1;
	for (int i = 2; i <= num1; i++)
	{
		if (num1 % i == 0 && num2 % i == 0)
		{
			gcf = i;
		}
	}
	return gcf;
}

int main()
{
	int num1;
	int num2;
	int gcf;

	printf("enter your numirator and your denominator\n");
	cin >> num1;
	cin >> num2;

	gcf = GCF(num1, num2);

	num1 = num1 / gcf;
	num2 = num2 / gcf;
	printf("This is your reduced fraction :)\n %i \n %i\n", num1, num2);

}
return 0;