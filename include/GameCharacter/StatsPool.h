#ifndef STATSPOOL_H
#define STATSPOOL_H

#include "Stats.h"
#include "Strength.h"
#include "Agility.h"
#include "Toughness.h"
#include <unordered_map>
#include <string>

class StatsPool
{
    public:
        StatsPool(){}
        StatsPool(Strength& stg,
                  Agility& agi,
                  Toughness& tgh);
        void setPool(Strength stg,
                     Agility agi,
                     Toughness tgh);
        void test();

        std::unordered_map<std::string,Stats&> getPool();

    protected:
        std::unordered_map<std::string,Stats&> m_pool;

    private:
};

#endif // STATSPOOL_H
