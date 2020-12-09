#!/usr/bin/python3
"""
lockboxes
"""


def canUnlockAll(boxes):
    """
    function to unlock boxes
    """
    locked = [1] + [0] * (len(boxes) - 1)

    for box in boxes:
        for item in box:
            if type(item) is int:
                if item < len(boxes) and boxes[item]:
                    locked[item] = 1
            else:
                return False
    if 0 in locked[:-1]:
        return False
    return True
