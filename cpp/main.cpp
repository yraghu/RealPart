#include <iostream>
#include "ossie/ossieSupport.h"

#include "RealPart.h"
int main(int argc, char* argv[])
{
    RealPart_i* RealPart_servant;
    Resource_impl::start_component(RealPart_servant, argc, argv);
    return 0;
}

