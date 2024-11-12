#ifndef SEA_BATTLE_SEGMENT_H
#define SEA_BATTLE_SEGMENT_H

class Segment {
public:
    enum class segment_state {Destroyed, Damaged, Whole};
    Segment();
    void hit();
    bool is_destroyed() const;
private:
    Segment::segment_state state;
};


#endif
