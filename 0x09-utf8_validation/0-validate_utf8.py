#!/usr/bin/python3
"""
Utf 8 validation
"""


def validUTF8(data):
    """
    validate utf8 data
    """
    Binaries = []
    for item in data:
        Binaries.append(bin(item)[2:])
    for item in Binaries:
        if len(item) > 7:
            return False
        if 192 <= int(item, 2) <= 193:
            return False
        if 245 <= int(item, 2) <= 255:
            return False
    return True

