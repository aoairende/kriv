#!/usr/bin/python3

"""Module defines a function"""


class BaseGeometry:
    """Defines a geometry class"""

    def area(self):
        """Area of geometry"""

        raise Exception("area() is not implemented")

    def integer_validator(self, name, value):
        """validates value"""

        if not isinstance(value, int):
            raise TypeError(f"{name} must be an integer")
        if value <= 0:
            raise ValueError(f"{name} must be greater than 0")
