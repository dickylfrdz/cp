#include <bits/stdc++.h>
using namespace std;
int n,x;
int main() {
	cin>>n;
	for(int i=1;i<=n;i++) {
		for(int j=1;j<=i;j++) {
			cout<<x;
			x=x+1;
			x%=10;
		}
		cout<<endl;
	}
}

