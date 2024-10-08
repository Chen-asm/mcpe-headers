#pragma once

#include "Item.h"

class HoeItem : public Item
{
public:
	HoeItem(std::string const&, int, Item::Tier);
	virtual ~HoeItem();
	virtual bool useOn(ItemInstance*, Player*, int, int, int, signed char, float, float, float);
	virtual bool isHandEquipped() const;
	virtual int getEnchantSlot() const;
};
