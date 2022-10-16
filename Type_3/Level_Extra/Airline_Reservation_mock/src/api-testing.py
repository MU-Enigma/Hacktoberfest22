# https://api.aviationstack.com/v1/flights?access_key=

import requests
import json
import sys
import os
import time

access_key = ''
base_url = 'http://api.aviationstack.com/v1/flights'

information = {
    'access_key': access_key,
}

flights = requests.get(base_url, params=information)

# Formatting the JSON data
flights_json = flights.json()
flights_json_pretty = json.dumps(flights_json, indent=4)

# Printing the JSON data
print(flights_json_pretty)