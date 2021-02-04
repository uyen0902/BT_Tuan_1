#include <iostream>

using namespace std;

int main()
{
	int n, sum=0;
	cin >> n;
	int a[n];
	for (int i=0; i < n; i++)
	cin >> a[i];
	
	double TB;
	for (int i=0; i < n; i++){
		sum = sum +a[i];
		TB = sum/n;
		} cout << TB << endl; 
		
	int max=a[0];	
	for (int i=1; i < n; i++){
		if(max < a[i]) max =a[i];
		} cout << max << endl;
		
	int min=a[0];
	for (int i=1; i < n; i++){
		if(min > a[i]) min = a[i];
		} cout << min ;
			
		
}

