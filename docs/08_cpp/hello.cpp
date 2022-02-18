#include <Rcpp.h>
using namespace Rcpp;

// [[Rcpp::export]]
void hello_world() {
  Rcpp::Rcout << "Hello World";
}
