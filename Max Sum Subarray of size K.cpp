#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,k;
	cin>>n>>k;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int i=0,j=0,sum=0,mx=INT_MIN;
	while(j<n){ //determining j will go will the last index of array
		sum +=a[j]; //sum till we dont reach the specified window
		if(j-i+1<k){ //if the the window size is not eqals k increase j
			j++;
		}
		else if(j-i+1==k){//if window size is equals to k 
			mx=max(mx,sum);//change value of mx to sum
			 sum-=a[i];//subtract the value of a[i] from sum
			i++;
			j++;
		}

	}
	cout<<mx;

}
