#!/usr/bin/python3

""" Defines a function that returns an object
(Python data structure) represented by a JSON string. """

import json


def from_json_string(my_str):
    """ Deserialize JSON string. """

    return json.loads(my_str)
