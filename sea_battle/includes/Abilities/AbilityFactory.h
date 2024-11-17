#ifndef SEA_BATTLE_ABILITYFACTORY_H
#define SEA_BATTLE_ABILITYFACTORY_H

#include "ScannerAbility.h"
#include "ShellingAbility.h"
#include "DoubleDamageAbility.h"
#include <memory>
#include <string>
#include <unordered_map>
#include <functional>
#include <stdexcept>

class AbilityFactory {
public:
    using Creator = std::function<std::unique_ptr<Ability>(void*)>;

    template <typename T>
    void register_ability(const std::string& name, Creator creator) {
        creators[name] = [creator](void* object) {
            if (!object) {
                throw std::invalid_argument("Null object passed to ability creator.");
            }
            return creator(object);
        };
    }

    std::unique_ptr<Ability> create_ability(const std::string& name, void* object) const {
        auto it = creators.find(name);
        if (it == creators.end()) {
            throw std::runtime_error("Ability not registered: " + name);
        }
        return it->second(object);
    }

private:
    std::unordered_map<std::string, Creator> creators;
};


#endif