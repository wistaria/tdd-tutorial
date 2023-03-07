function fibonacci(n)
    v0::BigInt = 0
    v1::BigInt = 1
    if n < 0
        for i = -1:-1:n
            v0, v1 = (v1 - v0, v0)
        end
        return v0
    end
    if n == 0
        return v0
    end
    if n == 1
        return v1
    end
    for i = 2:n
        v1, v0 = (v0 + v1, v1)
    end
    return v1
end