#!/usr/bin/python3

"""Module defines a function"""


def read_file(filename=""):
    """reads a text file"""

    if not filename:
        return
    with open(filename, mode="r", encoding="utf-8") as f:
        content = f.read()
        print(content, end="")
