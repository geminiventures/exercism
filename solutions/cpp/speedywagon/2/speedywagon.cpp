#include "speedywagon.h"

namespace speedywagon {

    bool connection_check(pillar_men_sensor* sensor){
        return sensor != nullptr;
    }

    int activity_counter(pillar_men_sensor *sensor_array_ptr,int capacity){
        int activity_total{0};
        for (int i = 0; i < capacity; i++)
        {
            if (connection_check(sensor_array_ptr + i))
            {

                capacity += sensor_array_ptr->activity;
                sensor_array_ptr += 1;
            }
        }
        return activity_total;
    }

    bool alarm_control(pillar_men_sensor* sensor_ptr){
        if (connection_check(sensor_ptr))
        {
            if (sensor_ptr->activity > 0)
                return true;
        }
        return false;
    }

    bool uv_alarm(pillar_men_sensor* sensor){
        if(sensor == nullptr){
            return false;
        }else{
            return uv_light_heuristic(&(sensor->data)) > sensor -> activity;
        }
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
