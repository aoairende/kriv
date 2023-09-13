#!/usr/bin/python3

""" Defines a function that appends to a text file. """


def append_write(filename="", text=""):
    """ Append a string to a text file. """

    with open(filename, mode="a", encoding="utf-8") as f:
        return f.write(text)
