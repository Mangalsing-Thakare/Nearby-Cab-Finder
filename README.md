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

1. **Download or Clone the Repository**
   - Clone using Git:
     ```
     git clone https://github.com/<your-username>/nearby-cab-finder.git

2. **Open a Terminal/Command Prompt in the Project Folder**
   Example (Windows):
   ```
   cd C:\Users\<YourUsername>\Downloads\nearby-cab-finder
   ```

3. **Compile the Program**
   ```
   g++ main.cpp -o nearby_cabs
   ```

4. **Run the Program**
   ```
   nearby_cabs.exe    # Windows
   ./nearby_cabs      # Linux/Mac
   ```
## Image of Terminal for Reference

<img width="1421" height="472" alt="image" src="https://github.com/user-attachments/assets/9f2832c3-0f1b-4a74-80c0-2a49e9fad728" />

5. **Check Output**
   The output will be in `result.json` in the same folder.

