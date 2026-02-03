#include "speedywagon.h"

namespace speedywagon {

// Enter your code below:
bool connection_check(const pillar_men_sensor* sensor)
{
    if (sensor != nullptr)
    {
        return true;
    }
    return false;
}

int activity_counter(std::vector<pillar_men_sensor> sensors, int capacity)
    {
    std::vector<pillar_men_sensor>* ptr{nullptr};
    std::vector<pillar_men_sensor>


        return 0;
    }
// Please don't change the interface of the uv_light_heuristic function
int uv_light_heuristic(std::vector<int>* data_array) {
    double avg{};
    for (auto element : *data_array) {
        avg += element;
    }
    avg /= data_array->size();
    int uv_index{};
    for (auto element : *data_array) {
        if (element > avg) ++uv_index;
    }
    return uv_index;
}

}  // namespace speedywagon
