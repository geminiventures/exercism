#include "doctor_data.h"
namespace heaven {

    std::string get_older_bob(Vessel v_one, Vessel v_two)
    {
        return v_one.generation < v_two.generation ? v_one.name : v_two.name;
    }

    bool in_the_same_system(Vessel v_one, Vessel v_two)
    {
        return v_one.current_system == v_two.current_system;
    }
}