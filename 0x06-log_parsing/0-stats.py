#!/usr/bin/python3
"""
Script to read from stdout and make math
"""
import sys

Status_code = {200: 0, 301: 0, 400: 0, 401: 0, 403: 0,
          404: 0, 504: 0, 500: 0}
ordered_statsus = [200, 301, 400, 401, 403, 404, 405, 500]

def check_format(line):
    """
    check input format, if wrong pass it
    from generator code, it's not possible to generate format erros
    """
    output = line.split(" ")
    status = int(output[-2])
    size = int(output[-1])
    return size, status

    
def compute_Status(status):
    """
    After every 10 lines and/or a keyboard interruption (CTRL + C), print these statistics from the beginning
    """
    global Status_code
    for keys in Status_code:
        if keys == status:
            Status_code[keys] += 1
     
def print_status(dict):
    """
    Loop throught dictionay and print item sorted, and if they are diifrent than zero
    """
    for k in dict:
        if dict[k] != 0:
            print("{}: {}".format(k, dict[k]))

total_size = 0
counter = 0
for line in sys.stdin:
    size, status = check_format(line)
    total_size += size
    counter += 1

    if counter <= 10:
        compute_Status(status)
    else:
        print("File size: {}".format(total_size))
        print_status(Status_code)
        counter = 0
