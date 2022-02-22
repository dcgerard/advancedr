#include <RcppArmadillo.h>
// [[Rcpp::depends(RcppArmadillo)]]
using namespace Rcpp;
using namespace arma;

// [[Rcpp::export]]
void ex() {
  mat A = { {1, 3, 5},
          {2, 4, 6} };
  Rcpp::Rcout << A << std::endl;
}
