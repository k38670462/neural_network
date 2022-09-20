#include "neuron.h"

neuron create_neuron(int num_out_weights) {
    neuron tmp;

    tmp.actv = 0.0;
    tmp.out_weights = (float*)malloc(sizeof(float) * num_out_weights);
    tmp.bias = 0.0;
    tmp.z = 0.0;

    return tmp;
}

void delete_neuron(neuron* head) {
    free(head->out_weights);
    free(head);
}