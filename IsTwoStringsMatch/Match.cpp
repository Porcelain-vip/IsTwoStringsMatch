#include<iostream>
#include<string>
using namespace std;

int strstr(const string dest, const string pat)
{
	const size_t N = dest.size() - pat.size() + 1;
	for (int i = 0; i != N; ++i)
	{
		int k = i, j = 0;
		for (; j != pat.size() && dest[k] == pat[j];)
		{
			++k; ++j;
			if (j == pat.size()) return i;
		}
	}
	return -1;
}

int main()
{
	string a, b;
	cout << "Please input two strings in which the first one is longer than the second: " << endl;
	cin >> a >> b;
	int n = strstr(a, b);
	cout << "The start position from zero is " << n << endl;
	return EXIT_SUCCESS;
}