#pragma once
#ifndef RUN_SESSION_H
#define RUN_SESSION_H

#include "IInputGenerator.h"
#include "IScoringRule.h"
#include "IRewardRule.h"
#include "ShopSystem.h"

class RunSession {
public:
    RunSession(IInputGenerator* input,
        IScoringRule* score,
        IRewardRule* reward,
        ShopSystem* shop);

    void Start();

private:
    IInputGenerator* inputGen_;
    IScoringRule* scoring_;
    IRewardRule* reward_;
    ShopSystem* shop_;

    int money_;
};

#endif