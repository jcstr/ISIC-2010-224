#include "queue.h"

queue::queue(int _n): n(_n), s(0) {
	array = new int[n];
}	

queue::~queue() {
	delete [] array;
}

void queue::enqueue(int x) {
	if (!empty()) {
		array[s++] = x;
	}
}

int queue::dequeue() {
	if (!empty()) {
		int x = array[0];

		int i = 0;
		s--;

		while (i < s) {
			array[i] = array[i+1];
			i++;
		}
		return x;
	}

	printf("Cola vacia\n");
	return x;
}

int queue::read() {
	if (!empty()) {
		return array[0];
	}
}
