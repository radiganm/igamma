### igamma.jl
### Mac Radigan
### SPDX-License-Identifier: PDDL-1.0

  module Igamma

    export igamma

    const libname = "libigamma"

    function igamma(a::Complex{Float32}, x::Complex{Float32})
      result = Ref{Complex{Float32}}(0)
      ccall((:__complex_incomplete_gamma_quad_MOD_cdig, libname),
        Void, (Ptr{Complex{Float32}}, Ptr{Complex{Float32}}, Ref{Complex{Float32}}), 
        a, x, result)
      result
    end

#   function igamma(a::Complex{BigFloat}, x::Complex{BigFloat})
#     result = Ref{Complex{BigFloat}}(0)
#     ccall((:__complex_incomplete_gamma_quad_MOD_cdig, libname),
#       Void, (Ptr{Complex{BigFloat}}, Ptr{Complex{BigFloat}}, Ref{Complex{BigFloat}}), 
#       a, x, result)
#     result
#   end

  end # module

### *EOF*
