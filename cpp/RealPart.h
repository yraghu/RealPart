#ifndef REALPART_IMPL_H
#define REALPART_IMPL_H

#include "RealPart_base.h"
using std::vector;
using std::complex;

class RealPart_i : public RealPart_base
{
    ENABLE_LOGGING
    public:
        RealPart_i(const char *uuid, const char *label);
        ~RealPart_i();
        int serviceFunction();
    private:
        vector<float> data;
};

#endif // REALPART_IMPL_H
