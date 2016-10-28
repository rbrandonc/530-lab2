/* COMP 530 Lab 2

Brandon Clark (rbc), PID 720474282
Audrey Sharp (aud), PID 720473458

UNC Honor Pledge: I certify that no unauthorized assistance has been received or
given in the completion of this work

*/

#include <unistd.h>
#include <stdlib.h>
#include <errno.h>
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main() {


	//printf("test\n");

	mallocTest1();
	mallocTest2();
	mallocTest3();
	mallocTest4();
	mallocTest5();

	freeTest1();
	freeTest2();
	freeTest3();
	freeTest4();
	freeTest5();

	poisonTest1();
	poisonTest2();
	poisonTest3();

	pageReturnTest1();

  //printf("malloc");
  return (errno);
}

void mallocTest1() {
	printf("malloc test 1\n");

	void *x = malloc(2);    
	printf("Address %p\n", x);
  void *y = malloc(89);   
  printf("Address %p\n", y);
  void *z = malloc(21);   
  printf("Address %p\n", z);
  void *r = malloc(27);  
  printf("Address %p\n", r);
  void *s = malloc(109);  
  printf("Address %p\n", s);
  void *t = malloc(265);  
  printf("Address %p\n", t); 
  void *l = malloc(516);  
  printf("Address %p\n", l);
  void *m = malloc(2048); 
  printf("Address %p\n", m); 
  void *n = malloc(64);   
  printf("Address %p\n", n); 
  void *o = malloc(519);   
  printf("Address %p\n", o); 

  printf("malloc test 1 done\n");
}

void mallocTest2() {
	printf("malloc test 2");

	void *x;
	int i;
	for(i = 0; i < 128; i++){
		x = malloc(32);
	}

	for(i = 0; i < 128; i++){
		void *x = malloc(32);
	}

	printf("malloc test 2 done\n");
}

void mallocTest3() {
	printf("malloc test 3\n");

	int *a = malloc(0);
	// int *aa = malloc(-1);
	// int *aaa = malloc(2048);

	int *b = malloc(31);
	int *c = malloc(32);
	int *d = malloc(33);

	int *e = malloc(63);
	int *f = malloc(64);
	int *g = malloc(65);

	int *h = malloc(127);
	int *i = malloc(128);
	int *j = malloc(129);

	int *k = malloc(255);
	int *l = malloc(256);
	int *m = malloc(257);

	int *n = malloc(511);
	int *o = malloc(512);
	int *p = malloc(513);

	int *q = malloc(513);
	int *r = malloc(513);
	int *s = malloc(513);

	int *t = malloc(1023);
	int *u = malloc(1024);
	int *v = malloc(1025);

	int *w = malloc(2047);
	int *x = malloc(2048);

	printf("malloc test 3 done\n");
}

void mallocTest4() {
	printf("malloc test 4\n");

	void *num = malloc(3);
	int number = 927834059873097597940750974029745092734957928734586723846598273450923478;
	*(int *)(num) = number;

	printf("malloc test 4 done\n");
}

void mallocTest5() {
	printf("malloc test 5\n");

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

	printf("malloc test 5 done\n");
}

void freeTest1() {
	printf("free test 1");

	void *x = malloc(64);
	free(x);

	printf("free test 1 done\n");
}

void freeTest2() {
	printf("free test 2\n");

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

	printf("free test 2 done\n");
}

void freeTest3() {
	printf("free test 3\n");

	int *x = malloc(2048);
	int *c = malloc(2048);
	int *v = malloc(2048);
	int *b = malloc(2048);

	free(x); 
	free(c);
	free(v);
	free(b);

	printf("free test 3 done\n");
}

void freeTest4() {
	printf("free test 4\n");

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

	printf("free test 4 done\n");
}

void freeTest5() {
	printf("free test 5\n");

	void *x;
	int i;
	for(i = 0; i < 128; i++){
		x = malloc(32);
	}
	free(x);

	printf("free test 5 done\n");
}

void poisonTest1() {
	printf("poison test 1\n");

	int n=512, i =0;
	unsigned char* byte_array = malloc(512);

	printf("Before free\n");
	while (i < n) {
	     printf("%02X",(unsigned)byte_array[i]);
	     i++;
	}

	free(byte_array);

	i=0;
	printf("After free\n");
	while (i < n) {
	     printf("%02X",(unsigned)byte_array[i]);
	     i++;
	}

  printf("poison test 1 done\n");
}

void poisonTest2() {
	printf("poison test 2\n");

	int n=2048, i =0;
	unsigned char* byte_array = malloc(2048);

	printf("Before free\n");
	while (i < n) {
	     printf("%02X",(unsigned)byte_array[i]);
	     i++;
	}

	free(byte_array);
	printf("After free\n");
	i = 0;
	while (i < n) {
	     printf("%02X",(unsigned)byte_array[i]);
	     i++;
	}

  printf("poison test 2 done\n");
}

void poisonTest3() {
	printf("poison test 3\n");

	unsigned char* byte_array1 = malloc(32);
	unsigned char* byte_array2 = malloc(64);
	unsigned char* byte_array3 = malloc(128);
	unsigned char* byte_array4 = malloc(1024);
	unsigned char* byte_array5 = malloc(2048);

	int i = 0;
	printf("\nbefore free\n");
	for (i = 0; i<32; i++) {
		printf("%02X", (unsigned)byte_array1[i]);
	}
	printf("\n");
	for (i = 0; i<64; i++) {
		printf("%02X", (unsigned)byte_array2[i]);
	}
	printf("\n");
	for (i = 0; i<128; i++) {
		printf("%02X", (unsigned)byte_array3[i]);
	}
	printf("\n");
	for (i = 0; i<1024; i++) {
		printf("%02X", (unsigned)byte_array4[i]);
	}
	printf("\n");
	for (i = 0; i<2048; i++) {
		printf("%02X", (unsigned)byte_array5[i]);
	}

	free(byte_array1);
	free(byte_array2);
	free(byte_array3);
	free(byte_array4);
	free(byte_array5);

	printf("\nafter free\n");
	for (i = 0; i<32; i++) {
		printf("%02X", (unsigned)byte_array1[i]);
	}
	printf("\n");
	for (i = 0; i<64; i++) {
		printf("%02X", (unsigned)byte_array2[i]);
	}
	printf("\n");
	for (i = 0; i<128; i++) {
		printf("%02X", (unsigned)byte_array3[i]);
	}
	printf("\n");
	for (i = 0; i<1024; i++) {
		printf("%02X", (unsigned)byte_array4[i]);
	}
	printf("\n");
	for (i = 0; i<2048; i++) {
		printf("%02X", (unsigned)byte_array5[i]);
	}

  printf("poison test 3 done\n");
}

void pageReturnTest1() {

	//Expected state after running:
	//Levels[5].free_objects = 2 whole_superblocks = 2
	//Levels[5].next.free_count = 1;
	//Levels[5].next.free_list contains an address whos .next = 0x0
	//Levels[5].next.next.free_count = 1;
	//Levels[5].next.next.free_list contains an address whos .next = 0x0

	void *a = malloc(2048);
	void *b = malloc(2048);
	void *c = malloc(2048);
	void *d = malloc(2048);
	void *e = malloc(2048);
	void *f = malloc(2048);
	void *g = malloc(2048);
	void *h = malloc(2048);
	void *i = malloc(2048);
	void *j = malloc(2048);
	void *k = malloc(2048);
	void *l = malloc(2048);
	void *m = malloc(2048);
	void *n = malloc(2048);
	void *o = malloc(2048);
	void *p = malloc(2048);
	void *q = malloc(2048);
	void *r = malloc(2048);
	void *s = malloc(2048);
	void *t = malloc(2048);
	void *u = malloc(2048);
	void *v = malloc(2048);
	void *w = malloc(2048);
	void *x = malloc(2048);
	void *y = malloc(2048);
	void *z = malloc(2048);

	free(a);
	free(b);
	free(c);
	free(d);
	free(e);
	free(f);
	free(g);
	free(h);
	free(i);
	free(j);
	free(k);
	free(l);
	free(m);
	free(n);
	free(o);
	free(p);
	free(q);
	free(r);
	free(s);
	free(t);
	free(u);
	free(v);
	free(w);
	free(x);
	free(y);
	free(z);

	a = malloc(2048);
	b = malloc(2048);
	c = malloc(2048);
	d = malloc(2048);
	e = malloc(2048);
	f = malloc(2048);
	g = malloc(2048);
	h = malloc(2048);
	i = malloc(2048);
	j = malloc(2048);
	k = malloc(2048);
	l = malloc(2048);
	m = malloc(2048);
	n = malloc(2048);
	o = malloc(2048);
	p = malloc(2048);
	q = malloc(2048);
	r = malloc(2048);
	s = malloc(2048);
	t = malloc(2048);
	u = malloc(2048);
	v = malloc(2048);
	w = malloc(2048);
	x = malloc(2048);
	y = malloc(2048);
	z = malloc(2048);

	free(a);
	free(b);
	free(c);
	free(d);
	free(e);
	free(f);
	free(g);
	free(h);
	free(i);
	free(j);
	free(k);
	free(l);
	free(m);
	free(n);
	free(o);
	free(p);
	free(q);
	free(r);
	free(s);
	free(t);
	free(u);
	free(v);
	free(w);
	free(x);
	free(y);
	free(z);
}