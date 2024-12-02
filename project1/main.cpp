#include <iostream>
#include "User.h"
#include "Train.h"
#include "Airplane.h"
using namespace std;

int main() {
    try {
        TransportNamespace::Train train("T100", 10);
        TransportNamespace::Airplane airplane("A100", 5);

        UserNamespace::User user("John");

        train.displayInfo();
        airplane.displayInfo();

        user.bookTicket(train, 3);
        user.bookTicket(airplane, 2);

        user.showTickets();

        train.showAvailableSeats();
        airplane.showAvailableSeats();
    }
    catch (const exception& e) {
        cout << "Error: " << e.what() << endl;
    }

    return 0;
}
