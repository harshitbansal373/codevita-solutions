#include <bits/stdc++.h>
using namespace std;

int main() {
	int n=4;
	int a[]={20,7,5,4};
	int k=3;
	while(k>0){
		// sort(a,a+n,greater<int>());
		int max=*max_element(a,a+n);
		for(int i=0;i<n;i++){
			if(a[i]==max){
				a[i]=a[i]/2;
				break;
			}
		}
		k--;
	}
	int sum=0;
	for(int i=0;i<n;i++){
		sum+=a[i];
	}
	cout<<sum;
	return 0;
}
