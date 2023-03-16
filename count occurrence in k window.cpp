#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,k;
	cin>>n>>k;
	int a[n];
	for(int i=0;i<n;i++ ){
		cin>>a[i];
	}
	int i =0,j=0;
	vector <int> ans;
	unordered_map <int,int>mp;
	while(j<n){
		mp[a[j]]++;
		if(j-i+1==k){
			ans.push_back(mp.size());
			if(mp[a[i]]==1){
				mp.erase(a[i]);
			}
			else{
				mp[a[i]]--;
			}
			i++;
		}
		j++;

	}
	 for (auto it = ans.begin(); it != ans.end(); it++)
        cout << *it << " ";

}
