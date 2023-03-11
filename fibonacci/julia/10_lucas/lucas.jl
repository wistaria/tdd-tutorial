include("recursion.jl")

function lucas(n)
    recursion(big(2), big(1), n)
end
