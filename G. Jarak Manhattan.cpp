#include <iostream>
using namespace std;
int x1,y1,x2,y2,x,y;
int main() {
	cin>>x1>>y1>>x2>>y2;
	x=x1-x2;
	y=y1-y2;
	if(x<0){
		x=x*-1;
	}
	if(y<0){
		y=y*-1;
	}
	cout<<x+y<<endl;
}

