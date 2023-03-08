using Test
include("fibonacci.jl")

@testset "fibonacci" begin
    @test fibonacci(0) == 0
end
