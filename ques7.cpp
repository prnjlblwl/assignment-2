#include <iostream>
using namespace std;

int main() 
{
	float a1,a2,a3;
	cout<<"enter 2 angles of a triangle:\n";
	cin>>a1>>a2;
	a3=180.0-(a1+a2);
   	cout<<"the third angle is:"<<a3;
	return 0;
}
