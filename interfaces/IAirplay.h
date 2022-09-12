#pragma once

#include "Module.h"

namespace WPEFramework {
    namespace Exchange {

        // @json
        struct EXTERNAL IAirplay : virtual public Core::IUnknown {
            enum { ID = ID_AIRPLAY};

            virtual ~IAirplay() { }

      struct EXTERNAL IAirplayNotification : virtual public Core::IUnknown {
            enum { ID = ID_AIRPLAY_NOTIFICATION };
      }      

        virtual void Register(IAirplay::IAirplayNotification* airplay) = 0;
        virtual void Unregister(IAirplay::IAirplayNotification* airplay) = 0;
        //virtual void SystemCommand(const string& command) = 0;
        virtual bool startAirplayApp(const string& parametersJson) = 0;


    };
    }
}