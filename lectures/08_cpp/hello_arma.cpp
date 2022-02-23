#include <RcppArmadillo.h>
// [[Rcpp::depends(RcppArmadillo)]]
using namespace Rcpp;
using namespace arma;

// [[Rcpp::export]]
void ex() {
  vec x = {1.0, 2.0, 3.0};
  Rcpp::Rcout << x << std::endl;
  x.clear();
  Rcpp::Rcout << x << std::endl;
}
