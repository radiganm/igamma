/// igamma.cc
/// Mac Radigan
/// SPDX-License-Identifier: PDDL-1.0

  #include "rad/igamma/igamma.h"

#ifdef __cplusplus
extern "C" {
#endif

  using Intrinsic_Complex128_t = _Complex float __attribute__((mode(TC)));

  using Complex_Double_t = void *;
  extern void __complex_incomplete_gamma_MOD_cdig(Complex_Double_t alpha, Complex_Double_t x, Complex_Double_t result);

  using Complex128_t = void *;
  extern void __complex_incomplete_gamma_quad_MOD_cdig(Complex128_t alpha, Complex128_t x, Complex128_t result);

#ifdef __cplusplus
}
#endif

namespace rad::igamma {

  using std::complex;
  using std::ostream;

  void igamma(complex<double> &alpha, complex<double> &x, complex<double> &result)
  {
    __complex_incomplete_gamma_MOD_cdig(&alpha, &x, &result);
  }

  void igamma(complex<__float128> &alpha, complex<__float128> &x, complex<__float128> &result)
  {
    __complex_incomplete_gamma_quad_MOD_cdig(&alpha, &x, &result);
  }

} // namespace

  using namespace rad::igamma;

  std::ostream& operator<<(std::ostream &os, std::complex<__float128> &o)
  {
    constexpr size_t buffer_size = 2048;
    static thread_local char buffer[buffer_size];
    snprintf(buffer, buffer_size, "(%.36Qg,%.36Qg)", o.real(), o.imag());
    os << buffer;
    return os;
  }


/// *EOF*
