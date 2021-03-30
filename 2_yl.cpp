#include <bits/stdc++.h>

using namespace std;

struct node
{
	string name; //fruit name
	int id;		//worker id
	int weight; //fruit weight
	bool operator<(const node sss)
	{
		if (name != sss.name)
			return name < sss.name;
		else if (weight != sss.weight)
			return weight < sss.weight;
		return id < sss.id;
	}
} p[100005];

int main()
{

	int n;
	cin >> n;
	int cnt = 0;
	while (cin >> p[cnt].name >> p[cnt].id >> p[cnt].weight)
	{
		cnt++;
	}
	sort(p, p + cnt);
	for (int i = 0; i < cnt; i++)
	{
		cout << p[i].name << " " << p[i].id << " " << p[i].weight << endl;
	}
	return 0;
}
