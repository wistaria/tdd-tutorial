include("recursion.jl")

function fibonacci(n)
    recursion(big(0), big(1), n)
end
