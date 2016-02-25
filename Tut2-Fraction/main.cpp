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
		int temp = den;
		num = num*d;
		den = den*d;
		num += n*temp;

	}

	void subtract(int n, int d)
	{
		int temp = den;
		num = num*d;
		den = den*d;
		num -= n*temp;

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

	int GCF(int n, int d)
	{
		if (d == 0)
			return n;
		else
			return GCF(d, n % d);
	
	}

	void print()
	{
		int div =GCF(num, den);
		num /= div;
		den /= div;
		cout << "Ans -> "<< num << "/" << den << endl;

			
	}
	
	
};

int main()
{
	Fraction myFraction;
	//Addition Test
	myFraction.setNumDenom(1,2);
	myFraction.add(1,2);
	myFraction.print();
	//Subtract Test
	myFraction.setNumDenom(12,16);
	myFraction.subtract(1,4);
	myFraction.print();
	// Multiply Test
	myFraction.setNumDenom(25, 100);
	myFraction.multiply(2, 1);
	myFraction.print();
	//Divide Test
	myFraction.setNumDenom(1500, 1000);
	myFraction.divide(1, 2);
	myFraction.print();

	return 0;
};
