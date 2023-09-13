#!/usr/bin/python3

""" Defines a function that Writes a string to a file."""


def write_file(filename="", text=""):
    """ Writes a string to a text file."""

    with open(filename, mode="w", encoding="utf-8") as f:
        return f.write(text)
