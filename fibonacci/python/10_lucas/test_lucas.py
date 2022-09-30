from lucas import lucas

def test_lucas():
    cases = [[-2, 3], [-1, -1], [0, 2], [1, 1], [2, 3], [3, 4], [10, 123], [40, 228826127], [100, 792070839848372253127]]
    for n, v in cases:
        assert lucas(n) == v
