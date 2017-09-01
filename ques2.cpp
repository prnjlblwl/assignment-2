#include <iostream>
using namespace std;

int main() {
	float celsius=0.0,fr=0.0;
	cout<<"enter the temperature in celsius:\n";
	cin>>celsius;
	fr=(1.8*celsius)+32;
	cout<<"the equivalent temperature in farenheit is:\n"<<fr;
	
	return 0;
}
