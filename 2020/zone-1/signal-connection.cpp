#include <bits/stdc++.h>
using namespace std;

const int r=6371;
double Radian(double degree) 
{ 
    double pi = 3.14159265359; 
    return (degree * (pi / 180)); 
} 

double findd1(double lt,double ld,double x,double y){
    double a,c;
    lt=Radian(lt);
    ld=Radian(ld);
    x=Radian(x);
    y=Radian(y);
    a= pow(sin((lt-x)/2),2)+cos(lt)*cos(x)*pow(sin((ld-y)/2),2);
    c=2*atan2(pow(a,0.5),pow(1-a,0.5));
    return r*c;
}

int main() {
	int n;cin>>n;
	int c=0;
	
	double lt[n];
	for(int i=0;i<n;i++){
	    cin>>lt[i];
	}
	
	double ld[n];
	for(int i=0;i<n;i++){
	    cin>>ld[i];    
	}
	
	int h[n];
	for(int i=0;i<n;i++){
	    cin>>h[i];
	}
	
	double x,y;
	cin>>x>>y;
	
	for(int i=0;i<n;i++){
	    double d1,d2;
	    d1=findd1(lt[i],ld[i],x,y);
	    d2=pow(2*r*h[i],0.5);
	    
	    if(d2>=d1){
	        c=c+1;
	    }
	}
	
	cout<<c;
	
	return 0;
}
