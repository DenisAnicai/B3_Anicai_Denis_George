#include "NumberList.h"

int main()
{
	NumberList L1, L2;

	L1.Init();
	L2.Init();

	int n; cin >> n;
	for (int i = 0; i < n; i++)
	{
		int x;
		cin >> x;
		L1.Add(x);
	}
	int m; cin >> m;
	for (int i = 0; i < m; i++)
	{
		int x;
		cin >> x;
		L2.Add(x);
	}

	L1.Sort();

	L1.Print();
	L2.Print();

	return 0;
}