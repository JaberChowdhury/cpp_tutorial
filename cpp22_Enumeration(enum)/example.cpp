#include <iostream>
using namespace std;

// Define an enum for Traffic Light
enum TrafficLight
{
    RED,
    YELLOW,
    GREEN
};

void showSignal(TrafficLight light)
{
    switch (light)
    {
    case RED:
        cout << "STOP! The light is RED." << endl;
        break;
    case YELLOW:
        cout << "GET READY! The light is YELLOW." << endl;
        break;
    case GREEN:
        cout << "GO! The light is GREEN." << endl;
        break;
    }
}

int main()
{
    TrafficLight currentLight = RED;

    showSignal(currentLight); // Output: STOP! The light is RED.

    currentLight = GREEN;
    showSignal(currentLight); // Output: GO! The light is GREEN.

    return 0;
}
