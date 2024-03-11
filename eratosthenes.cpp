#include <iostream>
#include<vector>

using namespace std;

int main()
{
	int n;
	cin >> n;
	vector<int>prime(n + 1, 0);
	for (int i = 2; i <= n; i++)
	{
		if (prime[i] == 0)
			if (i * i * 1ll <= n)
			{
				for (int j = i * i; j <= n; j += i)
				{
					prime[j] = 1;
				}
			}
	}
	for (int i = 1; i <= n; i++)
	{
		if (prime[i] == 0)
			cout << i << ' ';
	}
}

