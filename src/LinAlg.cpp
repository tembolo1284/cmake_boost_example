#include "../lib/LinAlg.hpp"
#include <boost/numeric/ublas/lu.hpp>

bool LinAlg::InvertMatrix(const boost::numeric::ublas::matrix<double>& input, boost::numeric::ublas::matrix<double>& inverse) {
    using namespace boost::numeric::ublas;
    matrix<double> A(input);
    permutation_matrix<std::size_t> pm(A.size1());
    int res = lu_factorize(A, pm);
    if (res != 0) return false;
    inverse.assign(identity_matrix<double>(A.size1()));
    lu_substitute(A, pm, inverse);
    return true;
}
