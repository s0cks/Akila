#include <akila/neuron.h>
#include <akila/synapse.h>

void
neuron_init(neuron* n, activation_strategy* activation){
  n->inputs = NULL;
  n->activation = activation;
  n->output = n->derivative = n->sum = 0.0;
}

void
neuron_activate(neuron* n){
  n->sum = 0x0;
  synapse* curr_synapse = n->inputs;
  while(curr_synapse){
    n->sum += curr_synapse->weight * curr_synapse->source->output;
    curr_synapse = curr_synapse->next;
  }
  n->output = n->activation->activate(n->sum);
  n->derivative = n->activation->derivative(n->output);
}
