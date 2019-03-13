#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	double M,D;
	cout << " Please input mass: " << endl;
	cin >> M; 
	cout << "Mass=" << M << "g" << endl;
	cout << "Please input density in grams per cubic centimeters:" << endl;
	cin >> D;
	cout <<"Density=" << D <<"g/cm^3"<< endl;
	cout << "Volume of the object:" << M/(4*D) <<"cm^3"<< endl;


_getch();
return 0;
}