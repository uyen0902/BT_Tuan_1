#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int a,b,c;
	cin >> a >> b >> c;
	if(a+b>c && b+c>a && a+c>b) 
	{
	double s=(a+b+c)/2;
	double area=sqrt(s*(s-a)*(s-b)*(s-c));
	cout << area;
	} 
	
}	
