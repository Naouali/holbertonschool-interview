#!/usr/bin/python3
"""
lockboxes
"""

def indexmatch(aList):
    """
    if the element is equal to it's index, return True, else return false
    """
    for i in aList:
        for j in i:
            if j == aList.index(i):
                return True
    return False




def canUnlockAll(boxes):
    """
    Method to unlock check if boxes are unlocked or locked
    return True if they can be unlocked, otherwise return false
    """
    reference = [0] * (len(boxes))
    
    for boxe in boxes:
        for keys in boxe:
            if keys >= len(boxes):
                continue
            if keys == boxes.index(boxe):
                continue
            else:
                reference[keys] += 1
    
    if 0 in reference[1:]:
        return False
    return True
    












   
  