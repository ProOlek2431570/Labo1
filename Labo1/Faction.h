#pragma once
#include <string>
using std::string;


class Faction
{
public:
    virtual int modifierAttaque(int base) = 0;
    virtual int modifierVie(int base) = 0;
    virtual int modifierDefense(int base) = 0;
    virtual int modifierCapacite(int base) = 0;
    virtual string getNom() = 0;
    virtual ~Faction();
};

class FactionRouge : public Faction
{
public: 
    int modifierAttaque(int base);  
    int modifierVie(int base);
    int modifierDefense(int base);
    int modifierCapacite(int base);
    string getNom();
};

class FactionBleue : public Faction 
{
public:
    int modifierAttaque(int base);
    int modifierVie(int base);
    int modifierDefense(int base);
    int modifierCapacite(int base);
    string getNom();
};
