#ifndef REALPART_IMPL_BASE_H
#define REALPART_IMPL_BASE_H

#include <boost/thread.hpp>
#include <ossie/Resource_impl.h>
#include <ossie/ThreadedComponent.h>

#include <bulkio/bulkio.h>

class RealPart_base : public Resource_impl, protected ThreadedComponent
{
    public:
        RealPart_base(const char *uuid, const char *label);
        ~RealPart_base();

        void start() throw (CF::Resource::StartError, CORBA::SystemException);

        void stop() throw (CF::Resource::StopError, CORBA::SystemException);

        void releaseObject() throw (CF::LifeCycle::ReleaseError, CORBA::SystemException);

        void loadProperties();

    protected:

        // Ports
        bulkio::InFloatPort *dataFloat_in;
        bulkio::OutFloatPort *dataFloat_out;

    private:
};
#endif // REALPART_IMPL_BASE_H
