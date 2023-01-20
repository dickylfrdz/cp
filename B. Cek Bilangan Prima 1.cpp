#include <bits/stdc++.h>
using namespace std;
int n;
int main() {
	cin>>n;
	for(int i=1;i<=n;i++) {
		int m;
		bool prime=1;
		cin>>m;
		if(m==1) {
			cout<<"BUKAN"<<endl;
		} else {
			for(int j=2;j<=sqrt(m);j++) {
				if(m%j==0) {
					prime=0;
				}
			}
			if(prime) {
				cout<<"YA"<<endl;
			} else {
				cout<<"BUKAN"<<endl;
			}
		}
	}
}

