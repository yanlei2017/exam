
#include "bits/stdc++.h"
using namespace std;
int main()
{

	int money = 300;
	int book_price, day_expect, day_infact;
	while (scanf("%d,%d,%d", &book_price, &day_expect, &day_infact) != EOF)
	{
		if (money < book_price + max(0, day_infact - day_expect)) //最低条件，50元的书每天1元
			continue;
		int res = 0;
		if (book_price >= 100)
		{

			for (int i = 1; i <= day_infact; i++)
			{
				if (i <= 15)
					res += 5;
				else
					res += 3;
			}
		}
		else if (book_price >= 50)
		{
			for (int i = 1; i <= day_infact; i++)
			{
				if (i <= 15)
					res += 3;
				else
					res += 2;
			}
		}
		else
		{
			res += day_infact;
		}
		money -= min(book_price, res + max(0, day_infact - day_expect)); //扣除超期  | 借了不还,扣除的租金价格最大不超过当前书价
	}

	cout << money << endl;
}
