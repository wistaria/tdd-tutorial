from fibonacci import fibonacci

def test_fibonacci():
    cases = [[-2, -1], [-1, 1], [0, 0], [1, 1], [2, 1], [3, 2], [10, 55], [40, 102334155], [100, 354224848179261915075]]
    for n, v in cases:
        assert fibonacci(n) == v
