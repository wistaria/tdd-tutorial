import pytest

from lucas import lucas


@pytest.mark.parametrize(
    "n, v",
    [
        [-2, 3],
        [-1, -1],
        [0, 2],
        [1, 1],
        [2, 3],
        [3, 4],
        [10, 123],
        [40, 228826127],
        [100, 792070839848372253127],
        [250, 17656721319717734662791328845675730903632844218828123],
    ],
)
def test_lucas(n, v):
    assert lucas(n) == v
