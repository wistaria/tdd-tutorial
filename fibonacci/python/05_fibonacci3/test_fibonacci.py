import pytest

from fibonacci import fibonacci


@pytest.mark.parametrize("n, v", [[0, 0], [1, 1], [2, 1], [3, 2]])
def test_fibonacci(n, v):
    assert fibonacci(n) == v
