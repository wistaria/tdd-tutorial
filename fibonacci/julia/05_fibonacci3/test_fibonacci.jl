using Test
include("fibonacci.jl")

for t in [(0,0), (1,1), (2,1), (3,2)]
  @test fibonacci(t[1]) == t[2]
end
