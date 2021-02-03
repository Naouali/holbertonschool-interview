#!/usr/bin/python3
"""
check stdin format
"""

import re


def check(data):
    """
    check the format of stdin input
    """
    data = list(data.split(" "))
    ip = "^\d{1,3}\.\d{1,3}\.\d{1,3}\.\d{1,3}$"
    size = data[-1].replace("\n", "")
    stat = data[-2]
    try:
        size = int(size)
    except:
        return 1
    try:
        stat = int(stat)
    except:
        return 1
    status = [200, 301, 400, 401, 403, 404, 405, 500]
    if stat not in status:
        return 1
    match = re.match(ip, data[0])
    if data[4].replace('"', '') == 'GET' and data[5] == '/projects/260' and data[6] == 'HTTP/1.1"' and match:
        return 0
    else:
        return 1



