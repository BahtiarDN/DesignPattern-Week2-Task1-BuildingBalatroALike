#pragma once
#ifndef SHOP_SYSTEM_H
#define SHOP_SYSTEM_H

#include <iostream>

class ShopSystem {
public:
    void Show() {
        std::cout << "[SHOP] offered: Bonus(+2) cost 2\n";
    }

    void Skip() {
        std::cout << "[SHOP] skipped\n";
    }
};

#endif