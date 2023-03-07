function fibonacci(n)
    if n < 0
        return fibonacci(n + 2) - fibonacci(n + 1)
    end
    if n == 0
        return 0
    end
    if n == 1
        return 1
    end
    return fibonacci(n - 1) + fibonacci(n - 2)
end
