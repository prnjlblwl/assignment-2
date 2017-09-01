#include <iostream>

using namespace std;

int main() 
{
	int s1,s2,s3,s4,s5,tot,max;
	float avg,per;
	cout<<"enter marks of 5 subjects respectively\n";
	cin>>s1>>s2>>s3>>s4>>s5;
	cout<<"enter maximum marks given in a subject\n";
	cin>>max;
	tot=s1+s2+s3+s4+s5;
	avg=tot/5;
	per=(tot*100)/max;
	cout<<"total is "<<tot<<"\naverage is "<<avg<<"\npercentage is "<<per;
            
	return 0;
}
