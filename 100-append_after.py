#!/usr/bin/python3

""" Defines a function that inserts a line of text to a file, after
each line containing a specific string. """


def append_after(filename="", search_string="", new_string=""):
    """
    Insert text after each line containing a given string in a file.
    Args:
        filename (str): The name of the file.
        search_string (str): The string to search for within the file.
        new_string (str): The string to insert.
    """

    string = ""
    with open(filename) as f:
        for line in f:
            string += line
            if search_string in line:
                string += new_string
    with open(filename, "w") as f:
        f.write(string)
