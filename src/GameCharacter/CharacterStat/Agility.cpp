#include "Agility.h"

/* ******************************************** */
/*                   Agility                    */
/* Visible stat to player                       */
/* Improve damages, speed and crit_chance       */
/*                                              */
/* Parent class : Stats                         */
/* Children classes : none                      */
/*                                              */
/* ******************************************** */

Agility::Agility()
{
    m_value = 0;
}

Agility::Agility(int value)
{
    m_value = value;
}

Agility::~Agility()
{
    //dtor
}

int Agility::getValue()
{
    return m_value;
}

void Agility::setValue(int value)
{
    m_value = value;
}