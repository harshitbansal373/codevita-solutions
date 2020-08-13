#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,k,sum=0;
	cin>>n>>k;
	priority_queue<int> pq;
	for(int i=0;i<n;i++){
		int x;
		cin>>x;
		sum+=x;
		pq.push(x);
	}
	
	while(k){
		int x=pq.top();
		pq.pop();
		pq.push(x/2);
		sum-=x-x/2;
		k--;
	}
	
	cout<<sum;
	
	return 0;
}
