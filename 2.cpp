#include <bits/stdc++.h>

using namespace std;

struct node
{
	string name; //fruit name
	int cc;		 //index of different fruit ,first come, index smaller
	int id;		 //worker id
	int val;	 //fruit weight
	bool friend operator<(node x, node y)
	{
		if (x.cc != y.cc)
		{
			return x.cc < y.cc;
		}
		else
		{
			if (x.val != y.val) //weight
			{
				return x.val < y.val;
			}
			else
			{
				return x.id < y.id; //id
			}
		}
	}
} p[100005];
map<string, int> mp;
int main()
{

	int n;
	cin >> n;
	int cnt = 0;
	int te = 1;
	while (cin >> p[cnt].name >> p[cnt].id >> p[cnt].val)
	{
		if (mp[p[cnt].name])
		{
			p[cnt].cc = mp[p[cnt].name];
		}
		else
		{
			mp[p[cnt].name] = te;
			p[cnt].cc = te;
			te++;
		}
		cnt++;
	}
	sort(p, p + cnt);
	for (int i = 0; i < cnt; i++)
	{
		cout << p[i].name << " " << p[i].id << " " << p[i].val << endl;
	}
	return 0;
}
