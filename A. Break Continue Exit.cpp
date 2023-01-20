#include <bits/stdc++.h>
using namespace std;
int n;
int main() {
	cin>>n;
	for(int i=1;i<=n;i++) {
		if(i==42) {
			cout<<"ERROR"<<endl;
			break;
		}
		if(i%10==0) {
			continue;
		}
		cout<<i<<endl;
	}
}

