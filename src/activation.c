#include <akila/activation.h>

static double
sigmoid_activation(double weightedSum){
  return 1.0 / (1 + exp(-1.0 * weightedSum));
}

static double
sigmoid_derivative(double weightedSum){
  return weightedSum * (1.0 - weightedSum);
}

activation_strategy kSigmoidStrategy = {
  &sigmoid_activation, // activation function
  &sigmoid_derivative, // derivative function
};
