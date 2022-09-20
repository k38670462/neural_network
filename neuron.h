#ifndef NEURON_H
#define NEURON_H

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct _neuron {
	float actv;
	float *out_weights;
	float bias;
	float z;
} neuron;

neuron create_neuron(int num_out_weights);
void delete_neuron(neuron* head);

#endif