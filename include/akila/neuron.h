#ifndef AKILA_NEURON_H
#define AKILA_NEURON_H

#include "common.h"
#include "activation.h"
#include "net.h"

struct _neuron{
  synapse* inputs;
  activation_strategy* activation;
  double output;
  double derivative;
  double sum;
};

void neuron_init(neuron* n, activation_strategy* activation);
void neuron_activate(neuron* n);

#endif // AKILA_NEURON_H
