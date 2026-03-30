#include "RunSession.h"
#include "RandomInputGenerator.h"
#include "SimpleScoringRule.h"
#include "ModifiedRewardRule.h"
#include "ShopSystem.h"

int main() {
    IInputGenerator* inputGen = new RandomInputGenerator();
    IScoringRule* scoring = new SimpleScoringRule();
    IRewardRule* reward = new ModifiedRewardRule();
    ShopSystem shop;

    RunSession session(inputGen, scoring, reward, &shop);
    session.Start();

    delete inputGen;
    delete scoring;
    delete reward;

    return 0;
}