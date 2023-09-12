#!/usr/bin/python3

"""Module defines a class"""


class MyList(list):
    """Extends list class"""

    def print_sorted(self):
        """Prints sorted list"""

        print(sorted(self))
