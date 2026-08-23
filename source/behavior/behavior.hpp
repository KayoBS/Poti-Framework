#pragma once

#include <string>

class Behavior {
  private:
    std::string name;
    bool enabled;

  protected:
    void setName( std::string name );

  public:
    void setEnabled( bool enabled );

    std::string getName();
    bool isEnabled();
};
