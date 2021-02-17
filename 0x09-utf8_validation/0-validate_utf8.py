#!/usr/bin/python3
"""
Utf 8 validation
"""


def validUTF8(data):
    """
    validate utf8 data
    """
    if data is None:
        return False
    Binaries = []
    for item in data:
        if type(item) != int:
            return False
        Binaries.append(bin(item)[2:])
    for item in Binaries:
        if len(item) > 7:
            return False
        if 192 <= int(item, 2) <= 193:
            return False
        if 245 <= int(item, 2) <= 255:
            return False
    return True
