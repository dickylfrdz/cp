#include <bits/stdc++.h>
using namespace std;
int n;
int main() {
	cin>>n;
	for(int i=1;i<=n;i++) {
		int x;
		bool prime=1;
		cin>>x;
		if(x==1) {
			cout<<"BUKAN"<<endl;
		} else {
			for(int j=2;j<=sqrt(x);j++) {
				if(x%j==0) {
					prime=0;
				}
			}
			if(prime==1) {
				cout<<"YA"<<endl;
			} else {
				cout<<"BUKAN"<<endl;
			}
		}
	}
}

