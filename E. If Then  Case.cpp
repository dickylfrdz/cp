#include <bits/stdc++.h>
using namespace std;
int n;
int main() {
	cin>>n;
	if(n<10) {
		cout<<"satuan"<<endl;
	} else if(n<100) {
		cout<<"puluhan"<<endl;
	} else if(n<1000) {
		cout<<"ratusan"<<endl;
	} else if(n<10000){
		cout<<"ribuan"<<endl;
	} else {
		cout<<"puluhribuan"<<endl;
	}
}

