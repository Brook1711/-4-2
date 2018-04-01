#include<iostream>
using namespace std;

int S(int a[])
{
	return a[0] + 2 * a[1] + 5 * a[2];
}



int main()
{
	int sum = 0, count = 0;
	cin >> sum;
	int m[3] = { 1, 1, 1 };
	while ((S(m) <= sum))
	{
		while (S(m) <= sum)
		{
			while (S(m) <= sum)
			{
				if (S(m) == sum)
					count++;
				m[0]++;

			}
			m[1]++;
			m[0] = 1;
		}
		m[2]++;
		m[1] = 1;
		m[0] = 1;
	}
	cout << count;
	return 0;
}