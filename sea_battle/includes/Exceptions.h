#ifndef SEA_BATTLE_EXCEPTIONS_H
#define SEA_BATTLE_EXCEPTIONS_H

#include <stdexcept>
#include <string>

// Базовый класс для всех исключений в игре
class GameException : public std::runtime_error {
public:
    GameException(const std::string& message);
};

class AbilityUnavailableException : public GameException {
public:
    AbilityUnavailableException();
};

class ShipPlacementException : public GameException {
public:
    ShipPlacementException();
};

class OutOfBoundsAttackException : public GameException {
public:
    OutOfBoundsAttackException();
};

class WrongShipCoordinatesException : public GameException {
public:
    WrongShipCoordinatesException();
};

class NotEnoughBindsException : public GameException {
public:
    NotEnoughBindsException();
};

class MultipleBindException : public GameException {
public:
    MultipleBindException();
};


#endif