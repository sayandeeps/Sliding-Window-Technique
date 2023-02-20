#include <bits/stdc++.h>
using namespace std;
void print(vector <int>&ans){
	for(int i =0;i<ans.size();i++){
		cout<<ans[i]<<" ";
	}
}
int main(){
	int n,k;
	cin>>n>>k;
	vector <int>a;
	for(int i=0;i<n;i++){
		int q;
		cin>>q;
		a.push_back(q);
	}
	int i=0,j=0;
	deque <int> l;
	vector <int>ans;
	int x=a.size();
	while(j<x){
		//calculation
		while(l.size()>0&&l.back()<a[j]){
			l.pop_back();
		}
		l.push_back(a[j]);
		if(j-i+1<k){
			j++;
		}
		else if(j-i+1==k){
			ans.push_back(l.front());
			if(a[i]==l.front()){
				l.pop_front();
			}
			i++;
			j++;
		}
	}
	print(ans);
}
	
	
