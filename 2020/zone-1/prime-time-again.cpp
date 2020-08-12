#include <iostream>
using namespace std;
 
int isPrime(int n){
	if(n==1)
		return 0;
	for(int i=2;i*i<=n;i++){
		if(n%i==0)
			return 0;
	}
	return 1;
}
 
int primeagain(int d, int p){
	int c=0;
	for(int i=2;i<d/p;i++){
		if(isPrime(i)){
			int r=i;
			for(int j=0;j<p-1;j++){
				r=r+d/p;
				if(isPrime(r) && j==p-2){
					c+=1;
				}
				if(isPrime(r)!=true)
					break;
			}
		}
	}
	return c==0?0:c;
}
 
int main() {
	int d,p;
	cin>>d>>p;
	cout<<primeagain(d,p);
	return 0;
}
