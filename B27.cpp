#include <iostream>
using namespace std;

int main()
{
	int N;
	while(N >= 0)
	{
		if( N%5 == 0 ) cout << N/5;
		else cout << "-1";
	}
	while ( N == -1) 
	{
		cout << "Bye";
		break;
		
	}
	
}
