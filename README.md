🚖 Nearby Cab Finder (C++)
Overview
This project finds cab drivers within 50 km of a user's location using the Great Circle Distance formula.
It reads cab data from customers.json and writes the matching results to result.json.

How It Works
Reads cab latitude & longitude from customers.json.

Converts coordinates to radians and calculates distance.

If distance ≤ 50 km → adds to result.json.

Input Example (customers.json)
json
Copy
Edit
{"user_id": 101, "name": "Alice", "latitude": "12.9715987", "longitude": "77.594566"}
{"user_id": 102, "name": "Bob", "latitude": "13.035542", "longitude": "77.597100"}
Output Example (result.json)
json
Copy
Edit
{"user_id": 101, "name": "Alice"}
{"user_id": 102, "name": "Bob"}
How to Run
bash
Copy
Edit
g++ main.cpp -o nearby_cabs
./nearby_cabs
✔ Output will be saved in result.json.
