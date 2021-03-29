#include<bitsdc++.h>
using namespace std;
int main()
{

int money=300;
int a,b,c;
while(scanf("%d,%d,%d",&a,&b,&c)!=EOF)
{
if(money<a +max(0,c-b)) continue;
int res=0;
if(a>=100)
{

for(int i=1;i<=c;i++)
{
if(i<=15) res+=5;
else res+=3;
}

}
else if(a>=50)
{
for(int i=1;i<=c;i++)
{
if(i<=15) res+=3;
else res+=2;
}
}
else
{
res+=c;
}
money-=min(a,res+max(0,c-b));
}


cout<<money<<endl;
}
