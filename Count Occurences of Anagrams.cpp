#include <bits/stdc++.h>
using namespace std;
bool allzero(unordered_map<char,int>&m){
	int c=0;
	for(auto &pr:m){
		if(pr.second!=0){
			c=1;
			break;
		}
	}
	if(c==1){
		return false;
	}
	else{
		return true;
	}
}
int main(){
	string str,ptr;
	cin>>str>>ptr;
	int k =ptr.size();
	int i =0,j=0;
	unordered_map <char,int>m;
	for(int i=0;i<k;i++){
		m[ptr[i]]++;
	}
	int ans=0;
	while(j<str.size()){
		m[str[j]]--;
		
		if(j-i+1==k){
			if(allzero(m)){
				ans++;
			}
			m[str[i]]++;
			i++;


		}
		j++;

	}
	cout<<ans;
	

}
