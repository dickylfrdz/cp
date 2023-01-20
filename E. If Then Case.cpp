#include <bits/stdc++.h>
using namespace std;
int N;
int main() {
cin >> N;
if(N>0&&N<10) {
	cout<<"satuan"<<endl;
} else if(N>=10&&N<100) {
	cout<<"puluhan"<<endl;
} else if(N>=100&&N<1000){
	cout<<"ratusan"<<endl;
} else if(N>=1000&&N<10000) {
	cout<<"ribuan"<<endl;
} else if(N>=10000&&N<100000) {
	cout<<"puluhribuan"<<endl;
} else {
	return 0;
}
}
