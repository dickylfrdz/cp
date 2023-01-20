#include <bits/stdc++.h>
using namespace std;
int n,save,maxi,mini;
int main() {
	cin>>n;
	for(int i=1;i<=n;i++) {
		cin>>save;
		if(i==1) {
			maxi=save;
			mini=save;
		} else {
			if(mini>save) {
				mini=save;
			} 
			if(save>maxi) {
				maxi=save;
			}
		}
	}
	cout<<maxi<<" "<<mini<<endl;
}

