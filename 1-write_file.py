#!/usr/bin/python3

"""Module defines a function"""


def write_file(filename="", text=""):
    """write a string to a text file"""

    with open(filename, mode="w", encoding="utf-8") as f:
        return f.write(text)
