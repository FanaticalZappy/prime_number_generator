// prime_number_generator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <stdio.h>
using namespace std;

void main()
{
	int x;

	cout << "Enter an odd number to start the count from: ";
	cin >> x;

	if (x % 2 == 0)
	{
		x += 1;
	}

	while (true)
	{
		int noRemainderCount = 0;

		for (int i = x; i > 0; --i)
		{
			if (x % i == 0)
			{
				++noRemainderCount;
			}
		}
		if (noRemainderCount == 2)
		{
			cout << x << "\n";
		}
		x += 2;
	}
}
