#pragma once
#ifndef SIMPLE_SCORING_RULE_H
#define SIMPLE_SCORING_RULE_H

#include "IScoringRule.h"

class SimpleScoringRule : public IScoringRule {
public:
    int ComputeScore(int input) override {
        return input;
    }
};

#endif