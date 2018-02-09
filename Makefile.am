### Makefile.am
### Mac Radigan
### SPDX-License-Identifier: PDDL-1.0

AM_LDFLAGS  = -pthread                                                       \
              -L/usr/local/lib -ldl -lm                                      \
              -L/usr/lib/gcc/x86_64-linux-gnu/5 -lquadmath                   \
              -L/usr/lib/gcc/x86_64-linux-gnu/5 -lgfortran                    

AM_CPPFLAGS = -I$(top_srcdir)/include                                        \
              -std=c++1z                                                     \
              -O3                                                             

AM_FCFLAGS  = -Jmod

igamma_ldadd             = libigamma.la                                      \
                           -L/usr/local/lib                                  \
                           -ldl -lm                                          \
                           -lrt                                              \
                           -L/usr/lib/gcc/x86_64-linux-gnu/5 -lquadmath      \
                           -L/usr/lib/gcc/x86_64-linux-gnu/5 -lgfortran       

bin_PROGRAMS             = test_igamma

test_igamma_SOURCES      = src/tests/test_igamma.cc                           
test_igamma_LDADD        = $(igamma_ldadd)

lib_LTLIBRARIES          = libigamma.la                                       

libigamma_la_SOURCES     = src/rad/igamma/cincgam.f90                        \
                           src/rad/igamma/cincgam_quad.f90                   \
                           src/rad/igamma/igamma.cc                           
libigamma_la_LIBADD      = -lrt                                               
libigamma_la_LDFLAGS     = -fPIC                                             \
                           -L/usr/local/lib                                  \
                           -pthread                                          \
                           -lrt

pkginclude_HEADERS       = include/rad/igamma/igamma.h                        

### *EOF*
