/*** 
 * @Author: yanlei8
 * @Date: 2021-03-30 11:11:46
 * @LastEditTime: 2021-03-30 11:32:15
 * @LastEditors: yanlei8
 * @Description: 
 * @FilePath: /exam/test.cpp
 */

#include <bits/stdc++.h>

using namespace std;

struct stu
{
    int id;
    string name;

    bool operator<(const stu _s)
    {
        if (id != _s.id)
        {
            return id < _s.id;
        }
        return name < _s.name;
    }
};

stu p[3];
int main(int argc, char const *argv[])
{
    p[0] = {.id = 2, .name = "abc"};
    p[1] = {.id = 1, .name = "acb"};
    p[2] = {.id = 1, .name = "aaa"};
    sort(p, p + 3);
    for (auto &&i : p)
    {
        cout << "id=" << i.id << ", name=" << i.name << endl;
    }

    return 0;
}
