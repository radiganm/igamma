#!/usr/bin/julia -q
### test.jl
### Mac Radigan
### SPDX-License-Identifier: PDDL-1.0

  using Igamma

  a1 = Complex{Float32}(0.1,0.1)
  x1 = Complex{Float32}(0.1,0.1)
  y1 = igamma(a1, x1)
  @printf("(%f,%f) = igamma( a=(%f,%f), x=(%f,%f) )\n", real(y1), imag(y1), real(a1), imag(a1), real(x1), imag(x1))
  println()

# const a2 = big(0.1 + 0.1im)
# const x2 = big(0.1 + 0.1im)
# const y2 = igamma(a2, x2)
# println(y2)
# println()
# @printf(" = igamma(")
# println()
# @printf("  a=")
# println(a1)
# println()
# @printf("  x=")
# println(x1)
# println()
# @printf(")")
# println()

### *EOF*
