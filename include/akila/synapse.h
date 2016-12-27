#ifndef AKILA_SYNAPSE_H
#define AKILA_SYNAPSE_H

#include "common.h"
#include "net.h"

struct _synapse{
  synapse* next;
  neuron* source;
  double weight;
};

static inline void
synapse_init(synapse* s, neuron* n, double weight){
  s->weight = weight;
  s->source = n;
  s->next = NULL;
}

static inline void
synapse_link(synapse* from, synapse** to){
  synapse* next = *to;
  *to = from;
  from->next = next;
}

#endif // AKILA_SYNAPSE_H
