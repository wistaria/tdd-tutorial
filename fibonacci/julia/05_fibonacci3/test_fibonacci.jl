using Test
include("fibonacci.jl")

const TESTCASES = ((0, 0), (1, 1), (2, 1), (3, 2))

@testset "fibonacci" begin
    for (n, v) ∈ TESTCASES
        @test fibonacci(n) == v
    end
end
