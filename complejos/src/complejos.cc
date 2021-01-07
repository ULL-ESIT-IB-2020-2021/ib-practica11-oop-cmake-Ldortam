

#include <iostream>

using namespace std;
class Complex {

    private:

     double real;
     double imag;

    public:

     Complex(double = 0.0, double = 0.0);

	 static Complex sqrt(const Complex &n); //define
};

Complex::Complex(double r, double i) {
	real = r;
	imag = i;
}

const ostream& operator<<(const ostream &out, const Complex &n) {
	out << n.real << '+' << n.imag << 'i';
	return out;
}

Complex operator*(const Complex &a, const Complex &b);

Complex operator+(const Complex &a, const Complex &b) { 
    return Complex( a.real + b.real, a.imag + b.imag ); 
}

Complex operator-(const Complex &n) { 
    return -1 * n; 
}

Complex operator-(const Complex &a, const Complex &b) { 
    return a + -b; 
}
