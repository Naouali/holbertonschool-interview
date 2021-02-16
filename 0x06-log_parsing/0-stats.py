#!/usr/bin/python3
"""
stats code
"""


import sys
import re
check = __import__("check").check

size = 0
i = 0
status = {"200": 0, "301": 0, "400": 0, "401": 0, "403": 0,
          "404": 0, "504": 0, "500": 0}


def print_line(status, size):
    print("File size: {}".format(size))
    for k in sorted(status.keys()):
        if status[k] != 0:
            print("{}: {}".format(k, status[k]))


for line in sys.stdin:
    i += 1
    l = line.split(" ")
    try:
        stat = l[-2]
        size += int(l[-1])

        if stat in status:
            status[stat] += 1
    except:
        pass

    if i == 10:
        print_line(status, size)
        i = 0

else:
    print_line(status, size)
    i = 0
