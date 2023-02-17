#include <iostream>
#include <math.h>

using namespace std;

class Triangl
{
	

public:
	Triangl()
	{
		



	}

	int a;
	int b;
	int c;
	double S;
	double p;


	void Input() 
	{
		cout << "Enter the length of the first side: ";
		cin >> a;
		cout << "Enter the length of the second side: ";
		cin >> b;
		cout << "Enter the length of the third side: ";
		cin >> c;
		

		if ((a + b) > c && ((b + c) > a) && ((c + a) > b) ) 
		{

			p = (a + b + c) / 2;
			S = sqrt(p * ((p - a) * (p - b) * (p - c)));
			cout<< "The area of the triangle is: " << S;
		}
	    else if ((a <= 0) || (b <= 0) || (c <= 0))
		{
			throw exception ("One of the sides of the triangle is less or equal to zero.");
		}
		else
		{
			throw "Such a triangle does not exist.";
		}
	}


};
int main()
{

	Triangl triangls;

	try
	{
		triangls.Input();
	}
	
	catch (exception &ex)
	{
		cerr << ex.what();
	}
	
	catch (const char* exe)
	{
		cerr << exe;
			
	}
	

	return 0;

}