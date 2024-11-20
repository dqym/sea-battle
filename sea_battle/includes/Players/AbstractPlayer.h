#ifndef SEA_BATTLE_ABSTRACTPLAYER_H
#define SEA_BATTLE_ABSTRACTPLAYER_H

#include "../ShipObject/ShipManager.h"
#include "../DispatcherCLI.h"
#include "../Board.h"
#include "../ShipObject/ShipManager.h"


class AbstractPlayer {
public:
    AbstractPlayer(int field_size, int ships_count, const std::vector<int>& sizes);
    virtual bool place_ships() = 0;
    virtual bool make_shot(AbstractPlayer& opponent, std::optional<std::pair<char, int>> coords = std::nullopt) = 0;
    virtual bool update();
    virtual int get_damage();
    virtual void set_damage(int dmg);
    virtual Board& get_board();
    virtual ShipManager& get_ship_manager();
    virtual bool is_lose();
    void serialize(std::ostream& os);
    void deserialize(std::istream& is);
protected:
    int damage;
    Board board;
    ShipManager ship_manager;
};


#endif
