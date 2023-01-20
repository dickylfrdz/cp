#include <bits/stdc++.h>
using namespace std;
int n,save,big,smol;
int main() {
	cin>>n;
	for(int i=1;i<=n;i++) {
		cin>>save;
		if(i==1) {
			big=save;
			smol=save;
		}
		if(save>big) {
			big=save;
		}
		if(smol>save) {
			smol=save;
		}
	}
	cout<<big<<" "<<smol<<endl;
}

