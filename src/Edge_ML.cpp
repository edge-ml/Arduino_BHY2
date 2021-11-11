#include "Edge_ML.h"


Edge_ML::Edge_ML() {
    bhy = new Arduino_BHY2();
}

Edge_ML::~Edge_ML() {
    delete bhy;
}

bool Edge_ML::begin() {
    return bhy->begin(NICLA_BLE);
}

void Edge_ML::update() {
    bhy->update();
}

void Edge_ML::debug(Stream &stream) {
    bhy->debug(stream);
}

Edge_ML edge_ml;