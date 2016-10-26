#include <unistd.h>
#include <stdlib.h>
#include <errno.h>
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main() {

	// printf("test");

	// int i;
	// int r = 0;

	// while(r < 15){
	// 	int free_objects = 1;

	// 	for(i = 0; i <= r; i++){
	// 		free_objects = free_objects * 2;
	// 	}

	// 	printf("2^%d: %d\n", i, free_objects);
	// 	r++;
	// }

	// mallocTest1();
	// mallocTest2();
	// mallocTest3();
	// mallocTest4();
	// mallocTest5();

	// freeTest1();
	// freeTest2();
	// freeTest3();
	// freeTest4();
	// freeTest5();

	// poisonTest1();

  //printf("malloc");
  return (errno);
}

void mallocTest1() {
	int num = 500;
	srand(time(NULL));
	int i;
	for (i = 0; i < num; i++){
		int r = 513;
		printf("%d\n", r);
		void *x = malloc(r);
		// printf("test");
		printf("%d: %p\n",i, x);
	}
}

void mallocTest2() {
	void *x;
	for(int i = 0; i < 128; i++){
		x = malloc(32);
	}

	for(int i = 0; i < 128; i++){
		void *x = malloc(32);
	}
}

void mallocTest3() {
	int a = malloc(0);
	int aa = malloc(-1);
	int aaa = malloc(3000);

	int b = malloc(31);
	int c = malloc(32);
	int d = malloc(33);

	int e = malloc(63);
	int f = malloc(64);
	int g = malloc(65);

	int h = malloc(127);
	int i = malloc(128);
	int j = malloc(129);

	int k = malloc(255);
	int l = malloc(256);
	int m = malloc(257);

	int n = malloc(511);
	int o = malloc(512);
	int p = malloc(513);

	int q = malloc(513);
	int r = malloc(513);
	int s = malloc(513);

	int t = malloc(1023);
	int u = malloc(1024);
	int v = malloc(1025);

	int w = malloc(2047);
	int x = malloc(2048);
	int y = malloc(2049);
}

void mallocTest4() {

}

void mallocTest5() {

}

void freeTest1() {
	void *x = malloc(2048);
	free(x);
	x = malloc(2048);
	free(x);
	x = malloc(2048);
	free(x);
	x = malloc(2048);
	free(x);
	x = malloc(2048);
	free(x);
	x = malloc(2048);
	free(x);
	x = malloc(2048);
	free(x);
}

void freeTest2() {
	void *x = malloc(32);
	free(x);
	x = malloc(64);
	free(x);
	x = malloc(128);
	free(x);
	x = malloc(256);
	free(x);
	x = malloc(512);
	free(x);
	x = malloc(1024);
	free(x);
	x = malloc(2048);
	free(x);
}

void freeTest3() {
	int *x = malloc(2048);
	int *c = malloc(2048);
	int *v = malloc(2048);
	int *b = malloc(2048);

	free(x); free(c); free(v); free(b);
}

void freeTest4() {
	void *x = malloc(64);
	free(x);
}

void freeTest5() {

}

void poisonTest1() {

}