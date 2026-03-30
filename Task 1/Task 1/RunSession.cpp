#include <iostream>
#include "RunSession.h"

RunSession::RunSession(IInputGenerator* input,
    IScoringRule* score,
    IRewardRule* reward,
    ShopSystem* shop)
    : inputGen_(input), scoring_(score),
    reward_(reward), shop_(shop), money_(0) {}

void RunSession::Start() {
    std::cout << "=== RUN START ===\n";

    for (int round = 1; round <= 3; round++) {
        std::cout << "\nRound " << round << "\n";

        int input = inputGen_->Generate();
        std::cout << "[PLAY] input generated: " << input << "\n";

        int baseScore = scoring_->ComputeScore(input);
        std::cout << "[SCORE] base score: " << baseScore << "\n";

        int gain = reward_->ComputeReward(baseScore, round);
        money_ += gain;

        std::cout << "[REWARD] gain: " << gain
            << " | money: " << money_ << "\n";

        shop_->Show();
        shop_->Skip();
    }

    std::cout << "\n=== RUN END ===\n";
    std::cout << "Final money: " << money_ << "\n";
}