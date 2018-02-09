/// igamma.h
/// Mac Radigan
/// SPDX-License-Identifier: PDDL-1.0

  #include <complex>
  #include <iostream>

#pragma once

namespace rad::igamma {

  using std::complex;
  using std::ostream;

  void igamma(complex<double> &alpha, complex<double> &x, complex<double> &result);

  void igamma(complex<__float128> &alpha, complex<__float128> &x, complex<__float128> &result);

} // namespace

  std::ostream& operator<<(std::ostream &os, std::complex<__float128> &o);

/// *EOF*
