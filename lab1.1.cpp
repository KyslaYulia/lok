#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int f;
	int b;
	int count = 0;
	cin >> f;
	vector<int> vec(f);
	for (int i = 0; i < f ; i++)
	{
		cin >> b;
		vec[i] = b;
	}
	cin >> b;
	for (int i = 0; i < f; i++)
	{
		if (b == vec[i])
		{
			count++;
		}
	}
	cout << count;
}

