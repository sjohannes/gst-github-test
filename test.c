#include <pthread.h>
#include <signal.h>
#include <unistd.h>

void gst_init(int*, char***);

void *worker(void *arg) {
	sleep(10);
	raise(SIGINT);
	return 0;
}

int main(void) {
	pthread_t thread;
	pthread_create(&thread, 0, worker, 0);
	gst_init(0, 0);
}
