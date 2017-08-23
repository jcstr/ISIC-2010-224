/*
 * queue.h
 */

#include <cstdio>

class queue {
	int *array; /* stack implementation */
	int capacity;
	int size;

public:
	queue(int); // constructor
	~queue(); // destructor

	void push(int);
	int pop();
	int top();

	int cap() const { return capacity; }
	int siz() const { return size; }

	bool empty() { return size == 0; } 
	bool full() { return size == capacity; }

};

#endif /* Stack_hpp */
