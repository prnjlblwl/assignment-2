#include <iostream>
using namespace std;

int main() {
	float cel=0.0,fr=0.0;
	cout<<"enter the temperature in farenheit:\n";
	cin>>fr;
	cel=32-(5/9*fr);
	cout<<"the equivalent temperture in celsius is:\n"<<cel;
	return 0;
}
