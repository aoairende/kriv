#!/usr/bin/python3

"""Module defines a class"""


class Student:
    """student class"""

    def __init__(self, first_name, last_name, age):
        """Initialises an instance"""

        self.first_name = first_name
        self.last_name = last_name
        self.age = age

    def to_json(self, attrs=None):
        """a dictionary representation of a Student instance"""

        if isinstance(attrs, list) and all(isinstance(i, str) for i in attrs):
            return {k: getattr(self, k) for k in attrs if hasattr(self, k)}
        return self.__dict__
