#!/usr/bin/python3

""" Defines a function that creates an Object from a “JSON file """

import json


def load_from_json_file(filename):
    """ Writes an Object to a text file, using a JSON representation """

    with open(filename, mode="r", encoding="utf-8") as f:
        return json.loads(f.read())
