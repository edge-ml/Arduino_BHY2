#ifndef Edge_ML_H_
#define Edge_ML_H_

#include "Arduino_BHY2.h"


class Edge_ML {
    public:
        Edge_ML();
        virtual ~Edge_ML();
        
        bool begin();
        void update();
        void debug(Stream &stream);
    private:
        Arduino_BHY2 *bhy;
        
};

extern Edge_ML edge_ml;

#endif