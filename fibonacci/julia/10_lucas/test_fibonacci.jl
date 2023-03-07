using Test
include("fibonacci.jl")

@testset "fibonacci" begin
    let testcases = (
            (-2, -1),
            (-1, 1),
            (0, 0),
            (1, 1),
            (2, 1),
            (3, 2),
            (10, 55),
            (40, 102334155),
            (100, 354224848179261915075),
            (250, 7896325826131730509282738943634332893686268675876375),
        )
        for (n, v) ∈ testcases
            @test fibonacci(n) == v
        end
    end
end
