// Generated by cpp11: do not edit by hand
// clang-format off


#include "cpp11/declarations.hpp"

// de_regex.cpp
cpp11::writable::strings de_regex(strings the_regex);
extern "C" SEXP _DSSATcpp_de_regex(SEXP the_regex) {
  BEGIN_CPP11
    return cpp11::as_sexp(de_regex(cpp11::as_cpp<cpp11::decay_t<strings>>(the_regex)));
  END_CPP11
}
// extract_names.cpp
cpp11::writable::strings extract_names(std::string header, strings col_types, strings ljust, strings col_names);
extern "C" SEXP _DSSATcpp_extract_names(SEXP header, SEXP col_types, SEXP ljust, SEXP col_names) {
  BEGIN_CPP11
    return cpp11::as_sexp(extract_names(cpp11::as_cpp<cpp11::decay_t<std::string>>(header), cpp11::as_cpp<cpp11::decay_t<strings>>(col_types), cpp11::as_cpp<cpp11::decay_t<strings>>(ljust), cpp11::as_cpp<cpp11::decay_t<strings>>(col_names)));
  END_CPP11
}
// gen_regex.cpp
cpp11::writable::strings gen_regex(strings cnames, strings ljust);
extern "C" SEXP _DSSATcpp_gen_regex(SEXP cnames, SEXP ljust) {
  BEGIN_CPP11
    return cpp11::as_sexp(gen_regex(cpp11::as_cpp<cpp11::decay_t<strings>>(cnames), cpp11::as_cpp<cpp11::decay_t<strings>>(ljust)));
  END_CPP11
}
// header_to_fwf_position.cpp
data_frame header_to_fwf_position_cpp(std::string header, strings col_types_names, strings left_justified, strings col_names_in, strings read_only);
extern "C" SEXP _DSSATcpp_header_to_fwf_position_cpp(SEXP header, SEXP col_types_names, SEXP left_justified, SEXP col_names_in, SEXP read_only) {
  BEGIN_CPP11
    return cpp11::as_sexp(header_to_fwf_position_cpp(cpp11::as_cpp<cpp11::decay_t<std::string>>(header), cpp11::as_cpp<cpp11::decay_t<strings>>(col_types_names), cpp11::as_cpp<cpp11::decay_t<strings>>(left_justified), cpp11::as_cpp<cpp11::decay_t<strings>>(col_names_in), cpp11::as_cpp<cpp11::decay_t<strings>>(read_only)));
  END_CPP11
}
// name_to_regex.cpp
cpp11::writable::strings name_to_regex(strings cnames);
extern "C" SEXP _DSSATcpp_name_to_regex(SEXP cnames) {
  BEGIN_CPP11
    return cpp11::as_sexp(name_to_regex(cpp11::as_cpp<cpp11::decay_t<strings>>(cnames)));
  END_CPP11
}

extern "C" {
/* .Call calls */
extern SEXP _DSSATcpp_de_regex(SEXP);
extern SEXP _DSSATcpp_extract_names(SEXP, SEXP, SEXP, SEXP);
extern SEXP _DSSATcpp_gen_regex(SEXP, SEXP);
extern SEXP _DSSATcpp_header_to_fwf_position_cpp(SEXP, SEXP, SEXP, SEXP, SEXP);
extern SEXP _DSSATcpp_name_to_regex(SEXP);

static const R_CallMethodDef CallEntries[] = {
    {"_DSSATcpp_de_regex",                   (DL_FUNC) &_DSSATcpp_de_regex,                   1},
    {"_DSSATcpp_extract_names",              (DL_FUNC) &_DSSATcpp_extract_names,              4},
    {"_DSSATcpp_gen_regex",                  (DL_FUNC) &_DSSATcpp_gen_regex,                  2},
    {"_DSSATcpp_header_to_fwf_position_cpp", (DL_FUNC) &_DSSATcpp_header_to_fwf_position_cpp, 5},
    {"_DSSATcpp_name_to_regex",              (DL_FUNC) &_DSSATcpp_name_to_regex,              1},
    {NULL, NULL, 0}
};
}

extern "C" void R_init_DSSATcpp(DllInfo* dll){
  R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
  R_useDynamicSymbols(dll, FALSE);
  R_forceSymbols(dll, TRUE);
}
