using Test
include("fibonacci.jl")
@test fibonacci(0) == 0
@test fibonacci(1) == 1
