#include <bits/stdc++.h>
using namespace std;
int n;
int main() {
	cin >> n;
	int j=n-1;
	for(int i=0;i<j;i++) {
		n+=i+1;
	}
	cout<<n<<endl;
}
