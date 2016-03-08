#include "CharStat.h"

#include <iostream>
/* ******************************************** */
/*                  CharStats                   */
/* Gather visible values to player              */
/*                                              */
/* Parent class : Stats                         */
/* Children classes : none                      */
/*                                              */
/* ******************************************** */

CharStat::CharStat()
{
    m_health = 0;
    m_spell_damage = 0;
    m_weapon_damage = 0;
    m_resistance = 0;
    m_crit_chance = 0;
    m_speed = 0;
}

CharStat::CharStat(Strength str, Agility agi, Toughness tgh)
{
    m_health =  str.getValue()*Constants::StrengthHealthRatio
             +  tgh.getValue()*Constants::ToughnessHealthRatio
             +  agi.getValue()*Constants::AgilityHealthRatio;

    m_spell_damage =  str.getValue()*Constants::StrengthSpellDmgRatio
                   +  tgh.getValue()*Constants::ToughnessSpellDmgRatio
                   +  agi.getValue()*Constants::AgilitySpellDmgRatio;

    m_weapon_damage =  str.getValue()*Constants::StrengthWeaponDmgRatio
                    +  tgh.getValue()*Constants::ToughnessWeaponDmgRatio
                    +  agi.getValue()*Constants::AgilityWeaponDmgRatio;

    m_resistance =  str.getValue()*Constants::StrengthResistanceRatio
                 +  tgh.getValue()*Constants::ToughnessResistanceRatio
                 +  agi.getValue()*Constants::AgilityResistanceRatio;

    m_crit_chance = str.getValue()*Constants::StrengthCritChanceRatio
                  + tgh.getValue()*Constants::ToughnessCritChanceRatio
                  + agi.getValue()*Constants::AgilityCritChanceRatio;

    m_speed =       str.getValue()*Constants::StrengthSpeedRatio
                 +  tgh.getValue()*Constants::ToughnessSpeedRatio
                 +  agi.getValue()*Constants::AgilitySpeedRatio;

    m_pool.setPool(str, agi, tgh);
}

CharStat::~CharStat()
{

}

void CharStat::setStats(){

}

void CharStat::initStatPool(Strength str, Agility agi, Toughness tgh){
    m_pool.setPool(str,agi,tgh);
}
/*
void CharStat::test(){
    Strength* s = new Strength(1);
    Agility* ag = new Agility(1);
    Toughness* tg = new Toughness(1);
    CharStat* cp = new CharStat(*s,*ag,*tg);
    std::cout << cp;
}

std::ostream& operator<<(std::ostream &strm, const CharStat &cs) {
  return strm <<    "-- Statistiques -- " << endl <<
                    "Health : " << cs.getHealth() << endl <<
                    "Spell Damage : " << cs.getSpellDmg()h() << endl <<
                    "Weapon Damage : " << cs.getWeaponDmg() << endl <<
                    "Resistance : " << cs.getResist() << endl <<
                    "Crit Chance : " << cs.getCritChance() << endl <<
                    "Speed : " << cs.getSpeed() << endl <<
}*/
