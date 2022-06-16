#include <stdio.h>
#include <time.h>
#define LIMIT 100000000
#include <math.h>


int isprime(int i);

int main(int argc, char **argv)
{
 int i, count=4;
 time_t start_time, end_time;
 start_time = time(NULL);
 for (i=11; i<=LIMIT; i+=2) {
 if (isprime(i)) count++;
 }
 end_time = time(NULL);
 printf("Numbers of prime <= %d is %d (Elapsed time %.2lf sec)\n",
 LIMIT, count, difftime(end_time, start_time));
}

int isprime(int i){
	if(i <= 10)
		return 0;
	int j = 3;
	i = i / 2;
	while(j <= i)
	{
		if (i % j == 0)
			return 0;
		j++;
	}
	return 1;
}
