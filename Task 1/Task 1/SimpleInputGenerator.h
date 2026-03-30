#pragma once
#ifndef SIMPLE_INPUT_GENERATOR_H
#define SIMPLE_INPUT_GENERATOR_H

#include "IInputGenerator.h"

class SimpleInputGenerator : public IInputGenerator {
public:
    int Generate() override {
        return 3; // fixed
    }
};

#endif