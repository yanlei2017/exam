/*
 * @Author: your name
 * @Date: 2021-03-29 21:40:47
 * @LastEditTime: 2021-03-29 21:41:27
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \exam\1.c
 */



#include<bits/stdc++.h>

using namespace std;

struct node{
	string name;
	int id;
	int val;
	bool friend operator<(node x,node y){
		if(x.name!=y.name){
			return x.name<y.name;
		}
		else {
			if(x.val!=y.val){
				return x.val<y.val;
			}
			else{
				return x.id<y.id;
			}
		}
	}
}p[100005];

int main(){

	int n;
	cin>>n;
	int cnt=0;
	while(cin>>p[cnt].name>>p[cnt].id>>p[cnt].val){
		cnt++;
	}
	sort(p,p+cnt);
	for(int i=0;i<cnt;i++){
		cout<<p[i].name<<" "<<p[i].id<<" "<<p[i].val<<endl; 
	}
	return 0; 
}
