// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// rcpp_paac
NumericVector rcpp_paac(CharacterVector seq, NumericMatrix H, int lambda, float w);
RcppExport SEXP _ampir_rcpp_paac(SEXP seqSEXP, SEXP HSEXP, SEXP lambdaSEXP, SEXP wSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< CharacterVector >::type seq(seqSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type H(HSEXP);
    Rcpp::traits::input_parameter< int >::type lambda(lambdaSEXP);
    Rcpp::traits::input_parameter< float >::type w(wSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_paac(seq, H, lambda, w));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_ampir_rcpp_paac", (DL_FUNC) &_ampir_rcpp_paac, 4},
    {NULL, NULL, 0}
};

RcppExport void R_init_ampir(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
