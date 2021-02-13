#!/usr/bin/python3
"""
Minimim operations
"""


def minOperations(n):
    """
    minimum ops
    """
    count = 0
    inp = "H"
    if n < 2 or type(n) is not int:
        return 0
    while len(inp) != n:
        if n % len(inp) == 0:
            prev = inp
            inp = inp * 2
            count += 2
        else:
            inp = inp + prev
            count += 1
    return count
