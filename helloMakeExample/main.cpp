#include "Ord.hpp"
#include "Count.hpp"

# include <iostream>

using namespace std;

int main()
{

	cout << "hello" << endl;
	cout << "it's me !!!!!" << endl;
	Ord::writeList();

	cout << 5.0/18.4 << endl;
	cout << ( 8.1+10.2+15.3+17.4 )/5.0 << endl;
	cout << ( 8.0+10.1+15.2+17.3+18.4 )/5.0 << endl;
	cout << ( 1+3.1+5.2+10.3+18.4 )/5.0 << endl;

	cout << "react PCdabordb : " << ( 1.1+3.2+5.3+10.4 )/5.0 << endl;

	cout << ( 3.1+2.1+3.1+2.1+1.1+3.1+2.1+2 ) << endl;
	cout << 5.0/( 3.1+2.1+3.1+2.1+1.1+3.1+2.1+2 ) << endl;

	cout << (18.7 +
			3.1+2+
			3.1 + 2.1 +3.1+2.1+1.1+3.1+2+
			3.1+2.1+3.1+2+
			3.1+2.1+3.1+2.1+1)/5.0
	<< endl;

	cout << 5.0/19.5 << endl;

	cout << "instances : " << Count::countAllInstances() << endl;

	return 0;
}