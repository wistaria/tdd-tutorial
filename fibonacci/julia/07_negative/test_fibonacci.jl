using Test
include("fibonacci.jl")

const TESTCASES = ((-2, -1), (-1, 1), (0, 0), (1, 1), (2, 1), (3, 2), (10, 55))

@testset "fibonacci" begin
    for (n, v) ∈ TESTCASES
        @test fibonacci(n) == v
    end
end
