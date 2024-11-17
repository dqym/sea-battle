#include "../../includes/Abilities/DoubleDamageAbility.h"

DoubleDamageAbility::DoubleDamageAbility(AbstractPlayer& player_ref): player(player_ref) {}

void DoubleDamageAbility::use() {
    player.set_damage(2);
}

std::string DoubleDamageAbility::get_name() {return "Double-damage";}
