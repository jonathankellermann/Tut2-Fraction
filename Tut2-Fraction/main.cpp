#include <iostream>

using namespace std;

class Fraction
{
private:
	int num;
	int den;

public:
	void getNumDenom(int &p_num, int &p_den)
	{
		p_num = num;
		p_den = den;

	}

	void setNumDenom(int n, int d)
	{
		num=n;
		den=d;
	}

	void add(int n, int d)
	{
		num = num*d;
		den = den*d;
		num += n;

	}

	void subtract(int n, int d)
	{
		num = num*d;
		den = den*d;
		num -= n;

	}

	void multiply(int n, int d)
	{
		num = num*n;
		den = den*d;

	}
	void divide(int n, int d)
	{
		num = num*d;
		den = den*n;
	}

	void print()
	{
		cout << num << endl;
		cout << "/" << endl;
		cout << den << endl;
	
	}
	
};

int main()
{
	Fraction myFraction;
	myFraction.setNumDenom(4,5);
	myFraction.add(1,2);
	myFraction.print();
	myFraction.setNumDenom(4, 5);
	myFraction.subtract(1, 2);
	myFraction.print();


	return 0;
};
