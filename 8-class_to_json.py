#!/usr/bin/python3

""" Defines a function that returns the dictionary description with simple data structure (list, dictionary,
string, integer and boolean) for JSON serialization of an object """


def class_to_json(obj):
    """ Returns a dictionary representation of objects data structure"""

    return obj.__dict__
