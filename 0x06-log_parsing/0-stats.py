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
test = 0
for line in sys.stdin:
    i += 1
    test = check(line)
    if test == 1:
        pass
    else:

        if line == "":
            pass
        try:
            size += int(line.split()[-1])
            stat = line.split()[-2]
        except:
            pass
        for k in status:
            if stat == k:
                status[k] += 1

        if i == 10:
            print("File size: {}".format(size))
            for k in sorted(status):
                if status[k] != 0:
                    print("{}: {}".format(k, status[k]))
            i = 0
