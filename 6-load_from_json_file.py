#!/usr/bin/python3

"""Module defines a function"""

import json


def load_from_json_file(filename):
    """writes an Object to a text file, using a JSON representation"""

    with open(filename, mode="r", encoding="utf-8") as f:
        return json.loads(f.read())
