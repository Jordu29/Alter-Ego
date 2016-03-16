#ifndef CONSUMABLEITEM_H
#define CONSUMABLEITEM_H

#include "SellableItem.h"

class ConsumableItem : public SellableItem {
    public:
        ConsumableItem(int id, std::string name, std::string description, int sellvalue, int buyvalue, int healthbonus)
            : SellableItem(id,name,description,sellvalue,buyvalue){
            m_healthbonus = healthbonus;
            }
    protected:
    private:
        int m_healthbonus;
};

#endif // CONSUMABLEITEM_H
