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
		n = num;
		d = den;
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
	
	
	
	}
	
};

int main()
{


	return 0;
};
