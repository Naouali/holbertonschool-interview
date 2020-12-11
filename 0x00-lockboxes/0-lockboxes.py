#!/usr/bin/python3
"""
lockboxes
"""


def canUnlockAll(boxes):
    """
    function to unlock boxes
    """
    locked = [1] + [0] * (len(boxes) - 1)
    if len(boxes) == 1:
        return True
    if len(boxes) == 0:
        return False
    if type(boxes) != list:
        return False
    for box in boxes:
        for item in box:
            if type(item) is int:
                if item < len(boxes) and boxes[item]:
                    locked[item] = 1
            else:
                return False
    while locked[-1] == 0:
        locked.pop()
    if 0 in locked:
        return False
    return True
