using Test
include("fibonacci.jl")

@testset "fibonacci" begin
    let testcases = ((0, 0), (1, 1), (2, 1), (3, 2), (10, 55))
        for (n, v) in testcases
            @test fibonacci(n) == v
        end
    end
end
