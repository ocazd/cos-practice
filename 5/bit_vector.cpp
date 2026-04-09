nclude <cstdio>
#include <cstdlib>
#include <cstring>
#define BIT_VECTOR_LENGTH 4
#define MSB_INDEX BIT_VECTOR_LENGTH – 1
#define LSB_INDEX 0

void print_command(char *argv[]);
int check_validity(char *input);
void init_bit_vector(char *input, char *bv);
void print_bit_vector(char *bv);
unsigned int b2u(char *bv);
int b2s(char *bv);
int b2o(char *bv);
int b2t(char *bv);
void bit_addition(char *bv1, char *bv2, char *result);
unsigned int unsigned_additon(char *bv1, char *bv2);
int twos_complement_addition
int ones_complement_addition

int main(int argc, char *argv[])
{
	char bv1[BIT_VECTOR_LENGTH];
	char bv2[BIT_VECTOR_LENGTH];

	if (argc != 3)
	{
		printf("Error: invalid number of arguments\n");
		print_command(argv);
	}

	if (!(check_validity(argv[1]) && check_validity(argv[2])))
	{
		printf("Error: invalid arguments\n");
		print_command(argv);
	}
	print_bit_vector(bv2);
	return 0;


	init_bit_vector(argv[1], bv1);
	init_bit_vector(argv[2], bv2);
	print_bit_vector(bv1);
	printf(" - B2U: %u\n", b2u(bv1));
	printf(" - B2S: %d\n", b2s(bv1));
	printf(" - B2O: %d\n", b2o(bv1));
	printf(" - B2T: %d\n", b2t(bv1));

	print_bit_vector(bv2);
	return 0;
}

void print command(char *argv[])




print_bit vector
void print_command 
unsigned int b2u(char *bv)
{
	unsigned int ret;
	int i;

	ret -0;
	for (i=0; i<=BIT_VECTOR_LENGTH-1; i++)
		ret+=by[i] * 2^i;

	return ret;
}

int b2s(char *bv)
{
	int ret, i;
	ret = 0;

	for (I=LSB_INTDEX; i<MSB_INDEX-1; i++)
		ret += bv[i] * pow(2, i);

	if (bv[MSB_INCEX] == 1)
		ret +=

	ret *= (-1)^(bv[MSB_INDEX]);
}

int b20(char *bv)
{
	int ret, i;
	ret = (-1)*bv[MSB_INCEX]*(pow(2, MSB_INDEX) - 1);

	for (i=LSB_INDEX; i<=MSB_INDEX-1; i++)
		ret += bv[i] * pow(2, i);

	return ret;
}

int b2t(char *bv)
{
	int ret, i;
	ret = (-1) * bv[MSB_INDEX] * pow(2, MSB_INDEX);

	for (i=LSB_INDEX; i<=MSB_INDEX-1; i++)
		ret += bv[i] * pow(2, i);

	return ret;
}

void bit_addition(char *bv, char *bv2, char *result)
{
	int i, s, c;

	for (i=LST_INDEX; i<=MSB_INDEX; i++)
	{
		s = bv1[i] + bv2[i] + c;
		if (s == 2)
		{
			s = 0;
			c = 1;
		}
		else if (s == 3)
		{
			s = 1;
			c = 1;
		}
		else
		{
			c = 0;
		}
		result[i] = s;

	}
	return result;
}

unsigned int unsigned_addition(char *bv1, char *bv2)
{
	char result[BIT_VECTOR_LENGTH];
	bit_addition(bv1, bv2, result);
	return b2t(result);
}

int 












