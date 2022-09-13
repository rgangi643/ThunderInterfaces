#pragma once

#include "Module.h"

namespace WPEFramework {
    namespace Exchange {

        struct EXTERNAL IAirplay : virtual public Core::IUnknown {
            enum { ID = ID_AIRPLAY};

            virtual ~IAirplay() { }

      struct EXTERNAL INotification : virtual public Core::IUnknown {
            enum { ID = ID_AIRPLAY_NOTIFICATION };
            //virtual void StateChange(const INetflix::state state) = 0;
            virtual void Exit(const uint32_t exitCode) = 0;
      };      

        virtual void Register(IAirplay::INotification* sink) = 0;
        virtual void Unregister(IAirplay::INotification* sink) = 0;
        //virtual void SystemCommand(const string& command) = 0;
        virtual uint32_t startAirplayApp(const string& parametersJson) = 0;


    };
    }
}
