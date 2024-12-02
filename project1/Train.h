#ifndef TRAIN_H
#define TRAIN_H
#include "Transport.h"
using namespace std;

namespace TransportNamespace {
    class Train : public Transport {
    public:
        Train(const string& id, int capacity);
        void displayInfo() const override;
    };

}
#endif
