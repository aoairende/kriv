#!/usr/bin/python3

""" Defines a function that Reads a text file. """


def read_file(filename=""):
    """ Reads a text file. """

    if not filename:
        return
    with open(filename, mode="r", encoding="utf-8") as f:
        content = f.read()
        print(content, end="")
