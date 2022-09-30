from fibonacci import fibonacci

def test_fibonacci():
    cases = [[0, 0], [1, 1], [2, 1], [3, 2]]
    for n, v in cases:
        assert fibonacci(n) == v
