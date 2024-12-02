#ifndef USER_H
#define USER_H
#include <string>
#include <vector>
#include <memory>
#include "Ticket.h"
using TicketNamespace::Ticket;
#include "Transport.h"
using namespace std;

namespace UserNamespace {

    class User {
    public:
        explicit User(const string& username);

        void bookTicket(TransportNamespace::Transport& transport, int numSeats);
        void showTickets() const;

    private:
        string username;
        vector<TicketNamespace::Ticket> tickets;
    };

}

#endif
