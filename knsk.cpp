#include <bits/stdc++.h>
using namespace std;
int mid=0,res=0;
int cari (int left,int right) {
	int mid=left;
	while (mid<=right) {
		if(mid%11==0) {
			res++;
			mid++;
		}
		 else if(mid%12==0) {
			mid++;
	}
	else{
		if (mid%4==0) {
			res++;
		}
		mid++;
	}
	return res++;
}
}

int main() {
	cin>>left>>right;
	cout<<(1000,2000);
}

