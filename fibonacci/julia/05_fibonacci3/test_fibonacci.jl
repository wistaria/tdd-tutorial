using Test
include("fibonacci.jl")

@testset "fibonacci" begin
    let testcases = ((0, 0), (1, 1), (2, 1), (3, 2))
        for (n, v) ∈ testcases
            @test fibonacci(n) == v
        end
    end
end
