#include <iostream>
#include <iomanip>
#include <sstream>
#include <string>

class Task {
private:
    std::string taskName;
    int hours;
    int minutes;

    // Helper function to parse time string like "2:30AM"
    void parseTimeString(const std::string& timeString) {
        std::stringstream ss(timeString);
        char colon;  // To handle the colon between hours and minutes
        ss >> hours >> colon >> minutes;

        // Adjust for AM/PM
        std::string ampm;
        ss >> ampm;
        if (ampm == "am" || ampm == "AM") {
            // Do nothing, already in AM
        }
        else if (ampm == "pm" || ampm == "PM") {
            // Convert to 24-hour format if PM
            hours += 12;
        }
    }

public:
    Task(const std::string& name = "", const std::string& timeString = "") : taskName(name) {
        parseTimeString(timeString);
    }
    Task(const std::string& name = "", const int& hour = 0, const int& min = 0) : taskName(name), hours(hour), minutes(min) {}


    // Friend function to overload the '+' operator
    friend Task operator+(const Task& t1, const Task& t2) {
        int totalHours = t1.hours + t2.hours;
        int totalMinutes = t1.minutes + t2.minutes;

        // Adjusting hours and minutes
        totalHours += totalMinutes / 60;
        // totalMinutes %= 60;

        return Task("Combined Task", totalHours, totalMinutes);
    }

    // Friend function to overload the '<<' operator for printing
    friend std::ostream& operator<<(std::ostream& os, const Task& task) {
        os << "Task: " << task.taskName << " - " << task.hours << ":" << std::setw(2) << std::setfill('0') << task.minutes;
        return os;
    }
};

int main() {
    Task task1("Task A", "2:30AM");
    Task task2("Task B", "3:50AM");

    std::cout << task1 << std::endl;
    std::cout << task2 << std::endl;
    std::cout << task1 + task2 << std::endl;

    return 0;
}
