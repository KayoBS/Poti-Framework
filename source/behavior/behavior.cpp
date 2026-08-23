#include "./behavior.hpp"

void Behavior::setName( std::string name ) {
  this->name = name;
}

void Behavior::setEnabled( bool enabled ) {
  this->enabled = enabled;
}

std::string Behavior::getName() {
  return this->name;
}

bool Behavior::isEnabled() {
  return this->enabled;
}
