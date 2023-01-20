#include <bits/stdc++.h>
using namespace std;
int arr[100],x;
int main() {
	while(cin>>arr[x]) {
		x++;
	}
	for(int i=x-1;i>=0;i--) {
		cout<<arr[i]<<endl;
	}
}

