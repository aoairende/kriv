#!/usr/bin/python3

"""Module defines a function"""


def inherits_from(obj, a_class):
    """checks class instance"""

    return issubclass(type(obj), a_class) and type(obj) != a_class
