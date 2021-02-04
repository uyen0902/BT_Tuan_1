#include <iostream>

using namespace std;

int main()
{
	int a[5];
	for (int i = 0; i < 5; i++)
	cin >> a[i];
	int tmp;
	// sap xep tang dan
	for (int i = 0; i < 5; i++){
		for (int j = i+1; j < 5; j++){
			if(a[i] > a[j]){
				tmp = a[i];
				a[i] = a[j];
				a[j] = tmp;
			}
		}	
	}
	
	for (int i = 0; i < 5; i++) 
	cout << a[i] << " " ; // day so sau khi sap xep tang dan
	cout << endl << a[2];
	

}
