#include <bits/stdc++.h>
using namespace std;
int n,arr[1001],x,ayeaye;
int main() {
	cin>>n;
	for(int i=1;i<=n;i++) {
		cin>>x;
		arr[x]++;
	} 
	for(int i=1;i<=1000;i++){
		if(arr[i]>=arr[ayeaye]) {
			ayeaye=i;
		}
	}
	cout<<ayeaye<<endl;
}

