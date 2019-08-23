/*
 ============================================================================
 Name        : LatticePaths.c
 Author      : rightmirem
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

#define LLONG_MAX  9223372036854775807LL
#define ULLONG_MAX 18446744073709551615ULL
#define xIndex 21
#define yIndex 21

int main(void) {
    unsigned long long lattice[xIndex][yIndex];

    for(int x=0; x < xIndex; x++){
        for(int y=0; y < yIndex; y++){
            if (x == 0 || y == 0) {
                lattice[x][y] = 1;
                continue;
            }
            int locXaddend = (x - 1);
            int locYaddend = (y - 1);
			lattice[x][y] = (lattice[locXaddend][y] + lattice[x][locYaddend]);
            printf("Location %d x %d = %llu\n", x,y,lattice[x][y]);
    	}
	}
}
