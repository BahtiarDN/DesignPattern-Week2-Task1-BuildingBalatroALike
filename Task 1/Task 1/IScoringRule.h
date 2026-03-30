#pragma once
#ifndef I_SCORING_RULE_H
#define I_SCORING_RULE_H

class IScoringRule {
public:
    virtual int ComputeScore(int input) = 0;
};

#endif