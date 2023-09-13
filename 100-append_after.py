#!/usr/bin/python3

"""Module defines a function"""


def append_after(filename="", search_string="", new_string=""):
    """Insert text"""

    string = ""
    with open(filename) as f:
        for line in f:
            string += line
            if search_string in line:
                string += new_string
    with open(filename, "w") as f:
        f.write(string)
