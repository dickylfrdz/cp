#include <bits/stdc++.h>
using namespace std;
int n;
int main() {
	cin>>n;
	for(int i=1;i<=n;i++) {
		int x,a;
		cin>>x;
		a=2;
		for(int j=2;j<=sqrt(x);j++) {
			if(x%j==0) {
				a+=2;
			}
		}
		if(a<=4) {
			cout<<"YA"<<endl;
		} else {
			cout<<"BUKAN"<<endl;
		}
	}
}

