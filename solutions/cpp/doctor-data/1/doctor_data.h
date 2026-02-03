#pragma once
#include <string>

namespace star_map
{
    enum class System
    {
        Sol,
        BetaHydri,
        EpsilonEridani,
        AlphaCentauri,
        DeltaEridani,
        Omicron2Eridani

    };
}

// ERROR: FILE CORRUPTED. Please supply valid C++ Code.
namespace heaven
{

    class Vessel {
    public:
        std::string name{};
        int generation{};
        star_map::System current_system{};
        int busters{0};

        Vessel(std::string new_name, int new_generation)
        {
            name = new_name;
            generation = new_generation;
            current_system = star_map::System::Sol;
        }
        Vessel(std::string new_name, int new_generation, star_map::System new_system)
        {
            name = new_name;
            generation = new_generation;
            current_system = new_system;
        }
        heaven::Vessel replicate(std::string name)
        {
            return Vessel(name, this ->generation + 1);
        }
        void make_buster()
        {
            busters++;
        }
        bool shoot_buster()
        {
            busters--;
            if (busters == 0)
            {
                return true;
            }
            return false;
        }
    };
    std::string get_older_bob(Vessel v1, Vessel v2)
    {
        if (v1.generation > v2.generation)
        {
            return v1.name;
        }
        return v2.name;
    };


}


