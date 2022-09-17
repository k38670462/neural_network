#include <stdio.h>
#include <stdlib.h>

typedef struct _neuron {
	float actv;
	float *out_weights;
	float bias;
	float z;

	float d_actv;
	float *d_weights;
	float d_bias;
	float d_z;    
} neuron;

typedef struct layer_t {
	int num_neu;
	struct neuron_t *neu; 
} layer;
