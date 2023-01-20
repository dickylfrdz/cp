#include <bits/stdc++.h>
using namespace std;
int n;
int main() {
	cin >> n;
	int j=n + 4;
	for(int i=0; i<j; i++) {
		n+=i % 3;
	}
	cout<<n<<endl;
}
