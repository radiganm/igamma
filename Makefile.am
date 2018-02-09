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

sdrrx_ldadd              = libsdrrx.la                                       \
                           -L/usr/local/lib                                  \
                           -ldl -lm                                          \
                           -lrt                                              \
                           -L/usr/lib/gcc/x86_64-linux-gnu/5 -lquadmath      \
                           -L/usr/lib/gcc/x86_64-linux-gnu/5 -lgfortran       

bin_PROGRAMS             = igamma                                             

igamma_SOURCES           = src/igamma.cc
igamma_LDADD             = $(igamma_ldadd)

lib_LTLIBRARIES          = libigamma.la                                       

libigamma_la_SOURCES     = src/cincgam_edit.f90                               
libigamma_la_LIBADD      = -lrt                                               
libigamma_la_LDFLAGS     = -export-symbols-regex '^igamma_[^_]' -fPIC        \
                           -L/usr/local/lib                                  \
                           -shared -pthread                                  \
                           -lrt                                               

pkginclude_HEADERS       = include/igamma.h                                   

### *EOF*
