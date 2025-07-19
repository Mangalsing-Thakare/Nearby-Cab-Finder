# Nearby Cab Finder

## Overview
This project finds cabs within 50 km of a user’s location using the Great Circle Distance formula.  
It reads cab details from `customers.json` and writes the results to `result.json`.

## How It Works
1. Read cab latitude and longitude from `customers.json`.
2. Convert values to radians and calculate distance.
3. If distance is 50 km or less, save the cab details in `result.json`.

## Input Example (customers.json)
```
{"user_id": 101, "name": "Alice", "latitude": "12.9715987", "longitude": "77.594566"}
{"user_id": 102, "name": "Bob", "latitude": "13.035542", "longitude": "77.597100"}
```

## Output Example (result.json)
```
{"user_id": 101, "name": "Alice"}
{"user_id": 102, "name": "Bob"}
```

## How to Run
```
g++ main.cpp -o nearby_cabs
./nearby_cabs
```

The output will be saved in `result.json`.
