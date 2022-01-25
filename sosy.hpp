#ifndef SOSY_HPP
#define SOSY_HPP

#include <iostream>
#include "makarony.hpp"

class Sos
{
public:
    virtual std::string polej(const Makaron& ch) const = 0;

private:
};

class SosBolonski : public Sos
{
public:
    virtual std::string polej(const Makaron& ch) const { return ch.Typ() + "z sosem bolonskim"; };

private:
};

class SosVeganski : public Sos
{
public:
    virtual std::string polej(const Makaron& ch) const { return ch.Typ() + "z sosem veganskim"; };

private:
};

#endif
