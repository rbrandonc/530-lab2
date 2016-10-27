#include <unistd.h>
#include <stdlib.h>
#include <errno.h>
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main() {

		
	void *a = malloc(1024);
	void *b = malloc(1024);
	void *c = malloc(1024);
	void *d = malloc(1024);
	void *e = malloc(1024);
	void *f = malloc(1024);
	void *g = malloc(1024);
	void *h = malloc(1024);
	void *i = malloc(1024);
	void *j = malloc(1024);
	void *k = malloc(1024);
	void *l = malloc(1024);
	void *m = malloc(1024);
	void *n = malloc(1024);
	void *o = malloc(1024);

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


	//printf("test\n");

	// mallocTest1();
	// mallocTest2();
	// mallocTest3();
	// mallocTest4();
	// mallocTest5();

	// freeTest1();
	// freeTest2();
	//freeTest3();
	// freeTest4();
	// freeTest5();

	// poisonTest1();
	// poisonTest2();
	// poisonTest3();

	//pageReturnTest1();
	// pageReturnTest2();

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

	void *x = malloc(2048);    
	printf("X Address %p\n", x);
	void *y = malloc(2048);   
	printf("Y Address %p\n", y);

	free(x);
	printf("X Address after free %p\n", x);
	free(y);
  printf("Y Address after free %p\n", y);

  printf("poison test 1 done\n");
}

void poisonTest2() {
	printf("poison test 2\n");

	void *x = malloc(2);    
	printf("Address %p\n", x);
	free(x);
	printf("Address after free %p\n", x);

  void *y = malloc(89);   
  printf("Address %p\n", y);
  free(y);
  printf("Address after free %p\n", y);

  void *z = malloc(21);
  printf("Address %p\n", z);
  free(z);
  printf("Address after free %p\n", z);

  printf("poison test 2 done\n");
}

void poisonTest3() {
	printf("poison test 3\n");

	void *num = malloc(3);
	printf("Num Address %p\n", num);
	int number = 2937495087203984750873904750972340572930487592038475;
	*(int *)(num) = number;
	free(num);
	printf("Num Address after free %p\n", num);

	void *x = malloc(2048);    
	printf("Address %p\n", x);
	free(x);
	printf("Address after free %p\n", x);

  void *y = malloc(32);   
  printf("Address %p\n", y);
  free(y);
  printf("Address after free %p\n", y);

  void *z = malloc(64);
  printf("Address %p\n", z);
  free(z);
  printf("Address after free %p\n", z);

  void *a = malloc(78);
  printf("Address %p\n", a);
  free(a);
  printf("Address after free %p\n", a);

  printf("poison test 3 done\n");
}

void pageReturnTest1() {
		printf("page return test 1\n");
		void *x = malloc(2048);  
		printf("X Address %p\n", x);
		void *y = malloc(2048);   
		printf("Y Address %p\n", y);
		
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



		free(x);
		free(y);
		free(a);
		free(b);
		free(c);
		free(d);
		free(e);
		free(f);
		free(g);

	printf("X Address after free %p\n", x);
	  printf("Y Address after free %p\n", y);

	  printf("page return test 1 done\n");
}

void pageReturnTest2() {
	printf("page return test 2\n");

	void *a = malloc(512);
	void *b = malloc(512);
	void *c = malloc(512);
	void *d = malloc(512);
	void *e = malloc(512);
	void *f = malloc(512);
	void *g = malloc(512);
	void *h = malloc(512);
	void *i = malloc(512);
	void *j = malloc(512);
	void *k = malloc(512);
	void *l = malloc(512);
	void *m = malloc(512);
	void *n = malloc(512);
	void *o = malloc(512);
	void *p = malloc(512);
	void *q = malloc(512);
	void *r = malloc(512);
	void *s = malloc(512);
	void *t = malloc(512);
	void *u = malloc(512);
	void *v2 = malloc(512);
	void *v = malloc(2048);
	void *w = malloc(2048);
	void *x = malloc(2048);
	void *y = malloc(2048);
	void *z = malloc(2048);

	free(x);
	free(y);
	free(a);
	free(b);
	free(c);
	free(d);
	free(e);
	free(f);
	free(g);
	free(w);
	free(t);
	free(z);

	printf("page return test 2 done\n");
	
}