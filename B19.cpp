#include <iostream>
using namespace std;

int main()
{
	int x,y,z;
	cin >> x >> y >> z;
	bool b;
	if ((x<=y && y<=z) || (x>=y && y>=z)){
	b = true;
	} else b = false; 
	
	if(b) cout << b;
	else cout << b;
	
}	
