using Test
include("lucas.jl")

@testset "lucas" begin
    let testcases = ((-2, 3), (-1, -1), (0, 2), (1, 1), (2, 3), (3, 4), (10, 123), (40, 228826127), (100, 792070839848372253127))
        for (n, v) in testcases
            @test lucas(n) == v
        end
    end
end
