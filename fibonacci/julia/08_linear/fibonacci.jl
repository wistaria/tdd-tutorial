function fibonacci(n)
    v0 = 0
    v1 = 1
    if n < 0
        for _ ∈ -1:-1:n
            (v0, v1) = (v1 - v0, v0)
        end
        v0
    elseif n == 0
        v0
    elseif n == 1
        v1
    else
        for _ ∈ 2:n
            (v1, v0) = (v0 + v1, v1)
        end
        v1
    end
end
