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
		num += n*(den / d);

	}

	void subtract(int n, int d)
	{
		num = num*d;
		den = den*d;
		num -= n*(den / d);

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

	int GCD(int n, int d)
	{
		if ((n % d) == 0)
			return n;
		else
			return GCD(d, n % d);
	
	}

	void print()
	{
		int div =GCD(num, den);
		num /= div;
		den /= div;
		cout << "Ans -"<< num << "/" << den << endl;

			
	}
	
	
};

int main()
{
	Fraction myFraction;
	//Addition Test
	myFraction.setNumDenom(4,5);
	myFraction.add(1,2);
	myFraction.print();
	//Subtract Test
	myFraction.setNumDenom(4,5);
	myFraction.subtract(1,2);
	myFraction.print();
	// Multiply Test
	myFraction.setNumDenom(250, 500);
	myFraction.multiply(1, 2);
	myFraction.print();
	//Divide Test
	myFraction.setNumDenom(250, 500);
	myFraction.divide(1, 2);
	myFraction.print();

	return 0;
};
