#!/usr/bin/python3

"""Module defines a function"""

BaseGeometry = __import__("7-base_geometry").BaseGeometry


class Rectangle(BaseGeometry):
    """Defines a geometry class"""

    def __init__(self, width, height):
        """Initialises an instance"""

        super().integer_validator("width", width)
        self.__width = width
        super().integer_validator("height", height)
        self.__height = height

    def area(self):
        """returns area of the rectangle"""

        return self.__width * self.__height

    def __str__(self):
        """returns string representation of rectangle"""

        return f"[{self.__class__.__name__}] {self.__width}/{self.__height}"
