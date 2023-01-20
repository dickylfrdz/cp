#include <bits/stdc++.h>
using namespace std;
int fungsi (int n) {
	int a=n;
	if(a==0) {
		a=0;
	}else{
		a=1-n*fungsi(a-1);
	}
	return a;
}
int main() {
	int a;
	cin>>a;
	cout<<fungsi(a)<<endl;
}
