#include <bits/stdc++.h>
using namespace std;
int n,m,o;
int main() {
	cin >> n; cin >> m; o=0;
	int j=n+m;
	for(int i=0;i<j;i++) {
		o+=(m+1)-(n+2);
	}
	cout<<o<<endl;
}
