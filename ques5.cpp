#include <iostream>
#include <cmath>
using namespace std;
int main() 
{
    float b=0.0,e=0.0,p=0.0;

	cout<<"Enter base\n";    
	cin>>b;	
	cout<<"Enter exponent:\n";
    	cin>>e;
    	p = pow(b,e);
    	cout <<b<<"^"<< e<<"="<<p;
    	return 0;

}
