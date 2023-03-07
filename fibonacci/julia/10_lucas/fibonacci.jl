include("recursion.jl")

function fibonacci(n)
    return recursion(BigInt(0), BigInt(1), n)
end
