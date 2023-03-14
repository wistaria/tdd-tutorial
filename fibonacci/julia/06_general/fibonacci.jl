function fibonacci(n)
    if n == 0
        0
    elseif n == 1
        1
    else
        fibonacci(n-1) + fibonacci(n-2)
    end
end
