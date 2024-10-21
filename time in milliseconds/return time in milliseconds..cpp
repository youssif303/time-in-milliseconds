#include<iostream>
using namespace std;

int past(int h, int m, int s) {
	return (h * 3600 + m * 60 + s) * 1000;
}

int main()
{
	cout << "Time in milliseconds: "<<past(1, 0, 1);
	return 0;
}