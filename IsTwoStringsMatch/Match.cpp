#include<iostream>
#include<string>
using namespace std;

size_t Match(const string &stra, const string &strb, size_t pos = 0)
{
	size_t startpos = 0, i = pos, j = 0;
	while (i != stra.length() && j != strb.size())
	{
		if (stra[i] == strb[j]) { ++i; ++j; }
		else { i = ++startpos; j = 0; }
	}
	if (j == strb.size()) return startpos;
	else return -1;
}

int main()
{
	string stra = "ABCDEFG", strb = "CDE";
	size_t n = Match(stra, strb);
	cout << "The start position from zero is " << n << endl;
	return 0;
}