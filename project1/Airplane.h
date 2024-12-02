#ifndef AIRPLANE_H
#define AIRPLANE_H

#include "Transport.h"
 
using namespace std;

namespace TransportNamespace {

    class Airplane : public Transport {
    public:
        Airplane(const string& id, int capacity);
        void displayInfo() const override;
    };

}

#endif
