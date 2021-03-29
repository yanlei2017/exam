#include<bits/stdc++.h>

using namespace std;
string str;
vector<int>vec[100005];
int main(){
    int ans=300;
    int cnt=0;
    while(cin>>str){
    	int len=str.size();
        int flag=0;
        int num=0;
        for(int i=0;i<len;i++){
        	if(str[i]==','&&flag==0){
        		vec[cnt].push_back(num);
        		flag=1;
        		num=0;
        		continue;
        		
			}
		
			if(str[i]==','&&flag==1){
			   vec[cnt].push_back(num);
			   num=0;
			   continue;
			}
			
			num=num*10+str[i]-'0';
			
			
			
		}
		vec[cnt].push_back(num);
		cnt++;
    	
	}
    for(int i=0;i<cnt;i++){
    //	cout<<vec[i][0]<<" "<<vec[i][1]<<" "<<vec[i][2]<<endl;
    	if(vec[i][0]>=100&&vec[i][2]<=15){
    		if(ans-vec[i][1]*5>=0){
    			ans-=vec[i][1]*5;
			}
		}
		else if(vec[i][0]>=100&&vec[i][2]>15){
    		if(ans-15*5-(vec[i][1]-15)*3>=0){
    			ans-=vec[i][1]*5;
			}
		}
		else if(vec[i][0]>=50&&vec[i][0]<100&&vec[i][2]<=15){
    		if(ans-vec[i][2]*3>=0){
    			ans-=vec[i][2]*3;
			}
		}
		else if(vec[i][0]>=100&&vec[i][2]>15){
    		if(ans-15*3-(vec[i][2]-15)*2>=0){
    			ans-=vec[i][2]*2;
			}
		}
		else if(vec[i][0]<50){
    		if(ans-vec[i][2]>=0){
    			ans-=vec[i][2];
			}
        }
        if(vec[i][2]>vec[i][1]){
        	if(ans-vec[i][2]+vec[i][1]>=0){
        		ans-=vec[i][2]-vec[i][1];
			}
		}
	}
	cout<<ans<<endl;
	return 0;
}
