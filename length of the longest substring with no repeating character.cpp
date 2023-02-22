#include <bits/stdc++.h>
using namespace std;
int main(){
	string s;
	cin>>s;
	int i =0,j=0,mx=INT_MIN;
	int a[26]={0};
	while(j<s.length()){
		a[s[j]-'a']++;
		while(a[s[j]-'a']>1){
			a[s[i]-'a']--;
			i++;
		}
		mx=max(mx,j-i+1);//yaha k window ka size hain as all bola gaya hain
		j++;
	}
	cout<<mx;
}
