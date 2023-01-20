#include <bits/stdc++.h>
using namespace std;
int n,k;
int main() {
	cin>>n>>k;
	for(int i=1;i<=n;i++) {
		if(i%k==0) {
			cout<<"* ";
		} else {
			cout<<i<<" ";
		}
	}
	cout<<endl;
}

