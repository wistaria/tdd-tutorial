include("recursion.jl")

function lucas(n)
    return recursion(BigInt(2), BigInt(1), n)
end