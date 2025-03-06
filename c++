#include <iostream>

class HealthMonitor {
private:
    // Static variable to track the number of alerts issued
    static int alertCount;

public:
    // Static method to issue an alert and increment the count
    static void issueAlert() {
        alertCount++;
        std::cout << "Health alert issued!" << std::endl;
    }

    // Static method to return the number of alerts raised
    static int getAlertCount() {
        return alertCount;
    }
};

// Definition of the static member variable
int HealthMonitor::alertCount = 0;

int main() {
    // Issue some alerts
    HealthMonitor::issueAlert();
    HealthMonitor::issueAlert();

    // Get and print the number of alerts issued
    std::cout << "Total alerts issued: " << HealthMonitor::getAlertCount() << std::endl;

    return 0;
}
