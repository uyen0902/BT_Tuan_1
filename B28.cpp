#include <iostream>

using namespace std;

int main()
{
	string time;
	int hour=1, n=1;
	for (int i=1; i<=24; i++){
		if(n==1){
			hour =12; time="midnight";
		} else if (n==2){
			hour =1; time="am";
		} else if (n==13){
			time="noon";
		} else if (n==14){
			hour =1; time ="pm";
		}
		cout << hour << " " << time << endl;
		hour++;
		n++;
	}
}

