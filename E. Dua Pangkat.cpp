#include <bits/stdc++.h>
using namespace std;
int n;
int main() {
	cin>>n;
	while(n%2==0) {
		n/=2;
	} 
	if(n==1) {
		cout<<"ya"<<endl;
	} else {
		cout<<"bukan"<<endl;
	}
}

