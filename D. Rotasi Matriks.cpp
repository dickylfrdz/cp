#include <bits/stdc++.h>
using namespace std;
int n,m,arr[101][101];
int main() {
	cin>>n>>m;
	for(int i=1;i<=n;i++) {
		for(int j=1;j<=m;j++) {
			cin>>arr[i][j];
		}
	}
	for(int j=1;j<=m;j++) {
		for(int i=n;i>=1;i--) {
			if(i<n) {
				cout<<" ";
			}
			cout<<arr[i][j];
		}
		cout<<endl;
	}
}

