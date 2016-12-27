#include <akila/synapse.h>
#include <akila/neuron.h>

int
main(int argc, char** argv){
  neuron* n1 = malloc(sizeof(neuron));
  neuron_init(n1, &kSigmoidStrategy);

  neuron* n2 = malloc(sizeof(neuron));
  neuron_init(n2, &kSigmoidStrategy);

  neuron* n3 = malloc(sizeof(neuron));
  neuron_init(n3, &kSigmoidStrategy);

  neuron* n4 = malloc(sizeof(neuron));
  neuron_init(n4, &kSigmoidStrategy);

  n2->inputs = malloc(sizeof(synapse));
  synapse_init(n2->inputs, n1, 0.7);

  n3->inputs = malloc(sizeof(synapse));
  synapse_init(n3->inputs, n1, 0.3);

  n4->inputs = malloc(sizeof(synapse));
  synapse_init(n4->inputs, n1, 0.9);

  neuron_activate(n1);
  neuron_activate(n2);
  neuron_activate(n3);
  neuron_activate(n4);

  printf("Neuron 2 Output: %lf\n", n2->output);
  printf("Neuron 3 Output: %lf\n", n3->output);
  printf("Neuron 4 Output: %lf\n", n4->output); 

  return 0x0;
}
