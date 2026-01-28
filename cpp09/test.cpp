#include <iostream>
#include <iomanip>
#include <string>
#include <sstream>
#include <ctime>

bool isValidDate(const std::string& dateStr) {
    std::tm tm = {};
    std::istringstream ss(dateStr);

    // Attempt to parse the string into the tm struct
    ss >> std::get_time(&tm, "%Y-%m-%d");

    // Check if parsing failed or if there are extra characters in the stream
    if (ss.fail() || ss.rdbuf()->in_avail() != 0) {
        return false;
    }

    // Store the original values
    int original_day = tm.tm_mday;
    int original_month = tm.tm_mon;
    int original_year = tm.tm_year;

    // Normalize the date using mktime
    // Note: mktime modifies the struct tm in-place to reflect a valid date
    std::time_t time = std::mktime(&tm);

    // After mktime, check if the normalized values match the original values
    if (time == -1 || 
        original_day != tm.tm_mday || 
        original_month != tm.tm_mon || 
        original_year != tm.tm_year) {
        return false;
    }

    return true;
}

int main() {
    std::string date1 = "202422-02-29"; // Valid leap year date
    std::string date2 = "2023-02-29"; // Invalid date (2023 is not a leap year)
    std::string date3 = "2024-13-01"; // Invalid month

    std::cout << date1 << " is valid? " << (isValidDate(date1) ? "Yes" : "No") << std::endl;
    std::cout << date2 << " is valid? " << (isValidDate(date2) ? "Yes" : "No") << std::endl;
    std::cout << date3 << " is valid? " << (isValidDate(date3) ? "Yes" : "No") << std::endl;

    return 0;
}
