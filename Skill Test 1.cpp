#include <iostream>
#include <conio.h>
using namespace std;

int main ()
{
	double a, b; 
	cout << "Please enter pay rate per hour: " << endl;
	cin >> a;
	cout << "Please enter number of hours worked for each week: " << endl;
	cin >> b;
	cout << "Your income before taxes from your summer job:		" << a*b << endl; 
	cout << "Your income after taxes from your summer job:	        " << a*b-a*b*.14 << endl; 
	cout << "The money you spend on clothes and other accessories:   "<< (a*b-(a*b*.14)) *.10 << endl; 
	cout << "The money you spend on school supplies:			" <<  (a*b-(a*b*.14)) * .01   << endl;
	cout << "The money you spend to buy savings bonds:		" <<  (a*b-(a*b*.14)) *.25 << endl;
	cout << "The money your parents spend to buy additional savings bonds for you: " <<  (a*b-(a*b*.14)) *.25/2 << endl; 
	_getch();
	return 0;
}