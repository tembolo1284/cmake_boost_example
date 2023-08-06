#ifndef LINALG_HPP
#define LINALG_HPP

#include <boost/numeric/ublas/matrix.hpp>

class LinAlg {
public:
    static bool InvertMatrix(const boost::numeric::ublas::matrix<double>& input, boost::numeric::ublas::matrix<double>& inverse);
};

#endif // LINALG_HPP
