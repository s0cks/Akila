#ifndef AKILA_ACTIVATION_H
#define AKILA_ACTIVATION_H

#include "common.h"

typedef struct{
  double (*activate)(double);
  double (*derivative)(double);
} activation_strategy;

extern activation_strategy kSigmoidStrategy;

#endif // AKILA_ACTIVATION_H
