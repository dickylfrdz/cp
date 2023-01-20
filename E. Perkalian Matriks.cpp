#include <bits/stdc++.h>
using namespace std;
int arr[101][101],A[101][101],B[101][101],C[101][101],n,m,p;
int main() {
	cin>>n>>m>>p;
	for(int i=1;i<=n;i++) {
		for(int j=1;j<=m;j++) {
			cin>>A[i][j];
		}
	}
	for(int i=1;i<=m;i++) {
		for(int j=1;j<=p;j++) {
			cin>>B[i][j];
		}
	}
	for(int i=1;i<=n;i++) {
		for(int j=1;j<=p;j++) {
			for(int k=1;k<=m;k++) {
				C[i][j]+=A[i][k]*B[k][j];
			}
		}
	}
	for(int i=1;i<=n;i++) {
		for(int j=1;j<=p;j++) {
			if(j>1) {
				cout<<" ";
			}
			cout<<C[i][j];
		}
		cout<<endl;
	}
}

