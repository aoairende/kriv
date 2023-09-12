#!/usr/bin/python3
"""Module defines a class"""


class MyInt(int):
    """Class extends int"""

    def __eq__(self, value):
        """implemented as !="""

        return self.real != value

    def __ne__(self, value):
        """Implemented as =="""

        return self.real == value
