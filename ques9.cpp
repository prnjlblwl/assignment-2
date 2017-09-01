#include <iostream>
#include<cmath>
using namespace std;

int main() {
	int s;
	float powr,a;
	cout<<"enter side of a triangle\n";
	cin>>s;
	powr=pow(3,0.5)/4;
	a=powr*s*s;
	cout<<"the area is="<<a<<endl;

	return 0;
}
