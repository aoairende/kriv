#!/usr/bin/python3

"""Module defines a function"""


def class_to_json(obj):
    """returns a dict rep of objs data structure"""

    return obj.__dict__
