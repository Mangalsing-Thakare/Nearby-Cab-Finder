# Nearby-Cab-Finder (C++)
✅ Overview
This project finds all cab drivers within 50 km of a user's location using the Great Circle Distance formula.
It reads cab details from a JSON input file and writes the matching results to an output file.

✅ Features
✔ Reads cab data from customers.json
✔ Converts coordinates from degrees to radians
✔ Calculates distance using Great Circle Distance formula
✔ Outputs cabs within 50 km to result.json

✅ Algorithm Steps
Obtain latitude & longitude of each cab from customers.json.

Convert latitude & longitude from string → double.

Convert degrees → radians.

Use Great Circle Distance formula to calculate distance between user and cab.

If distance ≤ 50 km → write cab details to result.json.

✅ Folder Structure
css
Copy
Edit
NearbyCabFinder/
│
├── main.cpp          # C++ code
├── customers.json    # Sample input (cab details)
├── result.json       # Output file (generated after running code)
└── README.md         # Project documentation
✅ Input File: customers.json
Each line contains cab details in JSON-like format:

json
Copy
Edit
{"user_id": 101, "name": "Alice", "latitude": "12.9715987", "longitude": "77.594566"}
{"user_id": 102, "name": "Bob", "latitude": "13.035542", "longitude": "77.597100"}
{"user_id": 103, "name": "Charlie", "latitude": "15.317277", "longitude": "75.713890"}
✅ Output File: result.json
After running the program, cabs within 50 km of the user are listed:

json
Copy
Edit
{"user_id": 101, "name": "Alice"}
{"user_id": 102, "name": "Bob"}
✅ How to Compile & Run
On Linux/Mac
bash
Copy
Edit
# Clone the repository
git clone https://github.com/<your-username>/nearby-cab-finder.git
cd nearby-cab-finder

# Compile the C++ code
g++ main.cpp -o nearby_cabs

# Run the program
./nearby_cabs
On Windows (MinGW or similar)
bash
Copy
Edit
g++ main.cpp -o nearby_cabs.exe
nearby_cabs.exe
✔ The output will be saved in result.json.

✅ Sample Output Screenshot
(Add a screenshot of your terminal run and output file here)

markdown
Copy
Edit
![Output Screenshot](screenshot.png)
✅ Future Enhancements
Accept dynamic user location input instead of hardcoded coordinates

Proper JSON parsing using nlohmann/json library

GUI or web interface to select user location and display results

✅ Tech Stack
Language: C++

Algorithm: Great Circle Distance

✅ Author
👤 Your Name
GitHub Profile

Would you like me to generate this README.md file fully formatted for you as a text file so you can copy-paste easily, or should I give you a ready-to-upload ZIP with main.cpp, customers.json, and this README.md`?








You said:
i want the content i want to copy it in readme


ChatGPT said:
Here is the full README.md content ready to copy-paste:

🚖 Nearby Cab Finder (C++)
✅ Overview
This project finds all cab drivers within 50 km of a user's location using the Great Circle Distance formula.
It reads cab details from a JSON input file and writes the matching results to an output file.

✅ Features
✔ Reads cab data from customers.json
✔ Converts coordinates from degrees to radians
✔ Calculates distance using Great Circle Distance formula
✔ Outputs cabs within 50 km to result.json

✅ Algorithm Steps
Obtain latitude & longitude of each cab from customers.json.

Convert latitude & longitude from string → double.

Convert degrees → radians.

Use Great Circle Distance formula to calculate distance between user and cab.

If distance ≤ 50 km → write cab details to result.json.

✅ Folder Structure
css
Copy
Edit
NearbyCabFinder/
│
├── main.cpp          # C++ code
├── customers.json    # Sample input (cab details)
├── result.json       # Output file (generated after running code)
└── README.md         # Project documentation
✅ Input File: customers.json
Each line contains cab details in JSON-like format:

json
Copy
Edit
{"user_id": 101, "name": "Alice", "latitude": "12.9715987", "longitude": "77.594566"}
{"user_id": 102, "name": "Bob", "latitude": "13.035542", "longitude": "77.597100"}
{"user_id": 103, "name": "Charlie", "latitude": "15.317277", "longitude": "75.713890"}
✅ Output File: result.json
After running the program, cabs within 50 km of the user are listed:

json
Copy
Edit
{"user_id": 101, "name": "Alice"}
{"user_id": 102, "name": "Bob"}
✅ How to Compile & Run
On Linux/Mac
bash
Copy
Edit
# Clone the repository
git clone https://github.com/<your-username>/nearby-cab-finder.git
cd nearby-cab-finder

# Compile the C++ code
g++ main.cpp -o nearby_cabs

# Run the program
./nearby_cabs
On Windows (MinGW or similar)
bash
Copy
Edit
g++ main.cpp -o nearby_cabs.exe
nearby_cabs.exe
✔ The output will be saved in result.json.

✅ Sample Output Screenshot
(Add a screenshot of your terminal run and output file here)

markdown
Copy
Edit
![Output Screenshot](screenshot.png)
✅ Future Enhancements
Accept dynamic user location input instead of hardcoded coordinates

Proper JSON parsing using nlohmann/json library

GUI or web interface to select user location and display results

✅ Tech Stack
Language: C++

Algorithm: Great Circle Distance
