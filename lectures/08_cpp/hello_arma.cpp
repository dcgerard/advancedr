#include <RcppArmadillo.h>
// [[Rcpp::depends(RcppArmadillo)]]
using namespace Rcpp;
using namespace arma;

// [[Rcpp::export]]
void ex() {
  mat A = {{1.0, 2.0}, {3.0, 4.0}};
}
