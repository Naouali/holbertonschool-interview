#!/usr/bin/python3
"""
test
"""

import sys
check = __import__('check').check


for line in sys.stdin:
    print(check(line))
