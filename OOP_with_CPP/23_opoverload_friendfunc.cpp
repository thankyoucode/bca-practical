// Write a cpp program for implementation of overloading operators using friends function.
#include <iostream>
#include <iomanip>
#include <sstream>
#include <string>

class Task {
private:
    std::string taskName;
    int hours;
    int minutes;

    // Helper function to parse time string like "2:30"
    void parseTimeString(const std::string& timeString) {
        std::stringstream ss(timeString);
        char colon;  // To handle the colon between hours and minutes
        ss >> hours >> colon >> minutes;
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
        totalMinutes %= 60;
        return Task(t1.taskName + " - AND - " + t2.taskName, totalHours, totalMinutes);
    }

    // Friend function to overload the '<<' operator for printing
    friend std::ostream& operator<<(std::ostream& os, const Task& task) {
        os << "Task: " << task.taskName << " - " << task.hours << ":" << std::setw(2) << std::setfill('0') << task.minutes;
        return os;
    }
};

int main() {
    Task task1("Write 405_23 in computer", "00:16");
    Task task2("Write 405_23 in Journal", "00:07");

    std::cout << task1 << std::endl;
    std::cout << task2 << std::endl;
    std::cout << task1 + task2 << std::endl;

    return 0;
}


/*
Task: Write 405_23 in computer - 0:16
Task: Write 405_23 in Journal - 0:07
Task: Write 405_23 in computer - AND - Write 405_23 in Journal - 0:23
*/