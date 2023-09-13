#!/usr/bin/python3

"""Module defines a function"""

import json


def to_json_string(my_obj):
    """serialize an object"""

    return json.dumps(my_obj)
