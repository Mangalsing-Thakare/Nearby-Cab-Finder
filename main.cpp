#include <bits/stdc++.h>
using namespace std;

// User's location
#define USER_LAT 12.9611159
#define USER_LON 77.6362214

// Constants
#define PI 3.14159265358979323846
#define EARTH_RADIUS 6371.0

// Input and output files
ifstream inputFile("customers.json");
ofstream outputFile("result.json");

// Convert degrees to radians
double degToRad(double deg) {
    return deg * PI / 180.0;
}

// Calculate Great Circle Distance between user and cab
double calculateDistance(double cabLat, double cabLon) {
    double lat1 = degToRad(USER_LAT);
    double lon1 = degToRad(USER_LON);
    double lat2 = degToRad(cabLat);
    double lon2 = degToRad(cabLon);

    double deltaLon = lon2 - lon1;
    double centralAngle = acos(sin(lat1) * sin(lat2) +
                               cos(lat1) * cos(lat2) * cos(deltaLon));
    return EARTH_RADIUS * centralAngle;
}

// JSON-like parser structure
struct CabParser {
    string line;
    char latitudeStr[100], longitudeStr[100], idStr[100], nameStr[100];

    // Check and write cab if within 50 km
    void checkAndWrite(double cabLat, double cabLon) {
        if (calculateDistance(cabLat, cabLon) <= 50.0) {
            outputFile << "{\"user_id\": " << idStr
                       << ", \"name\": \"" << nameStr << "\"}\n";
        }
    }

    // Parse the file and process each cab
    void parse() {
        if (!inputFile.is_open()) {
            cerr << "Error: customers.json file not found!" << endl;
            return;
        }

        while (getline(inputFile, line)) {
            memset(latitudeStr, 0, sizeof(latitudeStr));
            memset(longitudeStr, 0, sizeof(longitudeStr));
            memset(idStr, 0, sizeof(idStr));
            memset(nameStr, 0, sizeof(nameStr));

            // Extract fields
            size_t latPos = line.find("\"latitude\":");
            size_t lonPos = line.find("\"longitude\":");
            size_t idPos = line.find("\"user_id\":");
            size_t namePos = line.find("\"name\":");

            if (latPos != string::npos) {
                size_t start = line.find("\"", latPos + 11) + 1;
                size_t end = line.find("\"", start);
                strncpy(latitudeStr, line.substr(start, end - start).c_str(), 99);
            }

            if (lonPos != string::npos) {
                size_t start = line.find("\"", lonPos + 12) + 1;
                size_t end = line.find("\"", start);
                strncpy(longitudeStr, line.substr(start, end - start).c_str(), 99);
            }

            if (idPos != string::npos) {
                size_t start = line.find(" ", idPos + 10) + 1;
                size_t end = line.find(",", start);
                strncpy(idStr, line.substr(start, end - start).c_str(), 99);
            }

            if (namePos != string::npos) {
                size_t start = line.find("\"", namePos + 7) + 1;
                size_t end = line.find("\"", start);
                strncpy(nameStr, line.substr(start, end - start).c_str(), 99);
            }

            // Convert to double and calculate distance
            double cabLat = atof(latitudeStr);
            double cabLon = atof(longitudeStr);
            checkAndWrite(cabLat, cabLon);
        }

        inputFile.close();
        outputFile.close();
    }
};

int main() {
    CabParser parser;
    parser.parse();
    cout << "Nearby cabs (within 50 km) saved in result.json" << endl;
    return 0;
}
