#include <stdio.h>
#include <time.h>

#define DATASET_SIZE 50000
#define SEED_VALUE 42u

static int dataset[DATASET_SIZE];

static unsigned int next_value(unsigned int *state)
{
	*state = (*state * 1103515245u) + 12345u;
	return (*state);
}

static void build_dataset(void)
{
	unsigned int state;
	int i;

	state = SEED_VALUE;

	for (i = 0; i < DATASET_SIZE; i++)
	dataset[i] = (int)(next_value(&state) % 100000);
}

static void process_dataset(void)
{
	int i;
	int v;

	for (i = 0; i < DATASET_SIZE; i++)
	{
		v = dataset[i];
		v = (v * 3) + (v / 7) - (v % 11);
		if (v < 0)
		v = -v;
		dataset[i] = v;
	}
}

static unsigned long reduce_checksum(void)
{
	unsigned long sum;
	int i;

	sum = 0;
	for (i = 0; i < DATASET_SIZE; i++)
	sum = (sum * 131ul) + (unsigned long)dataset[i];

	return (sum);
}

int main(void)
{
	unsigned long checksum;
	clock_t start;
	clock_t build_end;
	clock_t process_end;
	clock_t reduce_end;

	double total_o;
	double build_o;
	double process_o;
	double reduce_o;


	start = clock();
	build_dataset();
	build_end = clock();
	process_dataset();
	process_end = clock();
	checksum = reduce_checksum();
	reduce_end = clock();

	build_o = 1.0 * (build_end - start) / CLOCKS_PER_SEC;
	process_o = 1.0 * (process_end - build_end) / CLOCKS_PER_SEC;
	reduce_o = 1.0 * (reduce_end - process_end) / CLOCKS_PER_SEC;
	total_o = 1.0 * (reduce_end - start) / CLOCKS_PER_SEC;

	if (checksum == 0ul)
	printf("impossible\n");

    /* Required output (exact format, no extra lines):
     * TOTAL seconds: <float>
     * BUILD_DATA seconds: <float>
     * PROCESS seconds: <float>
     * REDUCE seconds: <float>
     */

	printf("TOTAL seconds: %.6f\n", total_o);
	printf("BUILD_DATA seconds: %.6f\n", build_o);
	printf("PROCESS seconds: %.6f\n", process_o);
	printf("REDUCE seconds: %.6f\n", reduce_o);

	return (0);
}
