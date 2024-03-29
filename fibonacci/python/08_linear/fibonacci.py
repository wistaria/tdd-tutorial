def fibonacci(n):
    v0 = 0
    v1 = 1
    if n < 0:
        for _ in range(-1, n - 1, -1):
            v0, v1 = (v1 - v0, v0)
        return v0
    if n == 0:
        return v0
    if n == 1:
        return v1
    for _ in range(2, n + 1):
        v1, v0 = (v0 + v1, v1)
    return v1
