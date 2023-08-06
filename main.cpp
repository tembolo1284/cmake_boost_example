#include <iostream>
#include <boost/numeric/ublas/matrix.hpp>
#include <boost/numeric/ublas/io.hpp>
#include "lib/LinAlg.hpp"

int main() {
    using namespace boost::numeric::ublas;

    // Define a 3x3 matrix
    matrix<double> m(3, 3);
    m(0, 0) = 1.0; m(0, 1) = 2.0; m(0, 2) = 3.0;
    m(1, 0) = 0.0; m(1, 1) = 4.0; m(1, 2) = 5.0;
    m(2, 0) = 1.0; m(2, 1) = 0.0; m(2, 2) = 6.0;

    // Invert the matrix
    matrix<double> minv(3, 3);
    LinAlg::InvertMatrix(m, minv);

    // Multiply the matrix by its inverse
    matrix<double> result = prod(m, minv);

    std::cout << "Original matrix:\n" << m << "\n";
    std::cout << "Inverse matrix:\n" << minv << "\n";
    std::cout << "Product of original and inverse:\n" << result << "\n";

    return 0;
}
