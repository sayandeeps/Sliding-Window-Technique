#include <bits/stdc++.h>
using namespace std;
void print(std::vector<int> const &input)
{
    for (int i = 0; i < input.size(); i++) {
        std::cout << input.at(i) << ' ';
    }
}
int main(){
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int k;
	cin >>k;
	int i=0,j=0;
	deque <int>l1;
	vector <int> v;
	while(j<n){
		if(a[j]<0){
		l1.push_back(a[j]);
	}
	if(j-i+1<k){
		j++;
	}
	else if(j-i+1==k){
		if(l1.size()==0){
			v.push_back(0);
		}
		else{
			v.push_back(l1.front());
			if(a[i]==l1.front()){
				l1.pop_front();
			}
			
		}
		i++;
			j++;
	}

				
			
		}
		print(v);
	}
