#pragma once
#ifndef MODIFIED_REWARD_RULE_H
#define MODIFIED_REWARD_RULE_H

#include "IRewardRule.h"

class ModifiedRewardRule : public IRewardRule {
public:
    int ComputeReward(int baseScore, int round) override {
        if (round % 2 == 0) {
            return baseScore * 2;
        }
        return baseScore + 2;
    }
};

#endif