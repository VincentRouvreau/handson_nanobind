from nanobind_example import cpath

def test_cpath():
    from pathlib import Path
    abs_path = str(Path().absolute())

    print(f"cpath = {cpath()}, absolute path = {abs_path}")
    assert cpath() == abs_path
