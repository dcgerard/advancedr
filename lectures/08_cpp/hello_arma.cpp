#include <RcppArmadillo.h>
// [[Rcpp::depends(RcppArmadillo)]]
using namespace Rcpp;
using namespace arma;

// [[Rcpp::export]]
void ex() {
  //
  Rcpp::Rcout << A << std::endl;
}
