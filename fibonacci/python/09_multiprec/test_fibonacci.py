import pytest
from fibonacci import fibonacci


@pytest.mark.parametrize(
    "n, v", [[-2, -1], [-1, 1], [0, 0], [1, 1], [2, 1], [3, 2], [10, 55], [40, 102334155], [100, 354224848179261915075]]
)
def test_fibonacci(n, v):
    assert fibonacci(n) == v
