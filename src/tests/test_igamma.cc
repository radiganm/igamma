/// test_igamma.cc
/// Mac Radigan
/// SPDX-License-Identifier: PDDL-1.0

  #include <complex>
  #include <iostream>
  #include "rad/igamma/igamma.h"

  int main()
  {
    using std::complex;
    using std::cout;
    using std::endl;
    using complex_t = complex<double>;
    using complex128_t = complex<__float128>;
    using namespace rad::igamma;

    {  // double
      complex_t alpha(0.1, 0.1);
      complex_t x(0.1, 0.1);
      complex_t y(0.0, 0.1);
      igamma(alpha, x, y);
      cout << "complex double:" << endl;
      cout << y << " = igamma(" << alpha << ", " << x << ")" << endl << endl;
    }

    {  // binary128
      complex128_t alpha(0.1, 0.1);
      complex128_t x(0.1, 0.1);
      complex128_t y(0.0, 0.1);
      igamma(alpha, x, y);
      cout << "complex binary128:" << endl;
      cout << y << endl
           << " = igamma(" << endl
           << "  " << alpha << endl
           << ", " << x << ")" << endl
           << endl;
    }

    return 0;
  }

/// *EOF*
