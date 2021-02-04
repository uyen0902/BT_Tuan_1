#include <iostream>

using namespace std;

int main()
{
	float height, weight;
	cin >> weight >> height;
	float BMI = weight/(height*height);
	cout << BMI;
}

