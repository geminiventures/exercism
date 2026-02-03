#pragma once
#include <string>
namespace star_map {
    enum class System {
        BetaHydri,
        Sol,
        EpsilonEridani,
        AlphaCentauri,
        DeltaEridani,
        Omicron2Eridani
      };
}

namespace heaven {
    class Vessel {
    public:
        Vessel(std::string new_name, int new_generation)
        {
            name = new_name;
            generation = new_generation;
            current_system = star_map::System::Sol;
        }

        Vessel(std::string new_name, int new_generation,
               star_map::System system)
        {
            name = new_name;
            generation = new_generation;
            current_system = system;
        }

        Vessel replicate(std::string new_name)
        {
            return Vessel{new_name, generation + 1, current_system};
        }
        void make_buster() { busters++; }

        bool shoot_buster()
        {
            if (busters > 0)
            {
                busters--;
                return true;
            }
            return false;
        };

        std::string name{};
        int generation{};
        star_map::System current_system{};
        int busters{};
    };
    std::string get_older_bob(Vessel, Vessel);
    bool in_the_same_system(Vessel, Vessel);
}