#pragma once
#ifndef RANDOM_INPUT_GENERATOR_H
#define RANDOM_INPUT_GENERATOR_H

#include "IInputGenerator.h"
#include <cstdlib>

class RandomInputGenerator : public IInputGenerator {
public:
    int Generate() override {
        return rand() % 5 + 1;
    }
};

#endif