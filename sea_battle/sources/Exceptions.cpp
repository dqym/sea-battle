#include "../includes/Exceptions.h"

GameException::GameException(const std::string& message) : std::runtime_error(message) {}

AbilityUnavailableException::AbilityUnavailableException()
    : GameException("Attempted to use an ability when none are available.\n") {}

ShipPlacementException::ShipPlacementException()
    : GameException("Attempted to place a ship too close to another ship or out of bounds.\n") {}

OutOfBoundsAttackException::OutOfBoundsAttackException()
    : GameException("Attack attempted out of field bounds.\n") {}

WrongShipCoordinatesException::WrongShipCoordinatesException()
    : GameException("Attempted to place a ship with incorrect coordinates.\n") {}