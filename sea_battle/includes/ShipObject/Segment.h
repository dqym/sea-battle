#ifndef SEA_BATTLE_SEGMENT_H
#define SEA_BATTLE_SEGMENT_H

#include <iostream>

class Segment {
public:
    enum class segment_state {Whole, Damaged, Destroyed};
    Segment();
    void hit();
    bool is_destroyed() const;
    int get_id();
    void serialize(std::ostream& os);
    void deserialize(std::istream& is);
private:
    int id;
    Segment::segment_state state;
    static int next_id;
};


#endif
