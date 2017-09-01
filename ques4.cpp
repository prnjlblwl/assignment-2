#include <iostream>
using namespace std;

int main() 
{
    int d,y,w;
    cout<<"enter number of days:\n";
    cin>>d;
    y=d/365;
    d=d%365;
    w=d/7;
    d=d%7;
    cout<<"years:"<<y<<"\nweeks:"<<w<<"\ndays:"<<d;
	return 0;
}
