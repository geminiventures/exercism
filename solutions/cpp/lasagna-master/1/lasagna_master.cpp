#include "lasagna_master.h"

#include <string>
#include <vector>

namespace lasagna_master
{
    // int preparationTime(const std::vector<std::string>& layers, int time = 2);

    double preparationTime(const std::vector<std::string>& layers, int time = 2)
    {
        return layers.size() * time;
    }

    lasagna_master::amount quantities(const std::vector<std::string>& layers)
    {

        lasagna_master::amount quant{};
        for (const auto & layer : layers)
        {
            if (layer == "noodles")
            {
                quant.noodles += 50;
            } else if (layer == "sauce")
            {
                quant.sauce += 0.2;
            }
        }
        return quant;
    }

    void addSecretIngredient(std::vector<std::string>& my_layers, const std::vector<std::string>& friend_layers)
    {
        my_layers.back() = friend_layers.back();
    }

    std::vector<double> scaleRecipe(const std::vector<double>& quantities, int portions)
    {
        std::vector<double> needed{};
        for (const auto& quantity : quantities)
        {
            needed.push_back(quantity * portions / 2);
        }
        return needed;
    }

    void addSecretIngredient(std::vector<std::string>& my_layers, const std::string& secret)
    {
        my_layers.back() = secret;
    }
} //namespace lasagna_master


