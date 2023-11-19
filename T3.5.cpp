#include <iostream>
using namespace std;
class ComplexNumber {
public:
    // Constructor
    ComplexNumber(double real, double imaginary)
        : real_(real), imaginary_(imaginary) {}

    // Member function to compute the sum of two complex numbers
    ComplexNumber add(const ComplexNumber& other) const {
        return ComplexNumber(real_ + other.real_, imaginary_ + other.imaginary_);
    }

    // Member function to compute the product of two complex numbers
    ComplexNumber multiply(const ComplexNumber& other) const {
        double resultReal = real_ * other.real_ - imaginary_ * other.imaginary_;
        double resultImaginary = real_ * other.imaginary_ + imaginary_ * other.real_;
        return ComplexNumber(resultReal, resultImaginary);
    }

    // Getter functions
    double getReal() const {
        return real_;
    }

    double getImaginary() const {
        return imaginary_;
    }

private:
    double real_;
    double imaginary_;
};

int main() {
    // Create two complex numbers
    ComplexNumber complex1(2.0, 3.0);
    ComplexNumber complex2(1.0, -2.0);

    // Compute and display the sum of the complex numbers
    ComplexNumber sum = complex1.add(complex2);
    cout << "Sum: " << sum.getReal() << " + " << sum.getImaginary() << "i\n";

    // Compute and display the product of the complex numbers
    ComplexNumber product = complex1.multiply(complex2);
    cout << "Product: " << product.getReal() << " + " << product.getImaginary() << "i\n";

    return 0;
}
