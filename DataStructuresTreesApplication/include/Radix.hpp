/**
* Burak Can Evci 
* G211210091
* 2B
* 2. Ödev
* Radix.hpp
**/

#ifndef RADIX_HPP
#define RADIX_HPP

#include "Queue.hpp"
#include <cmath>

class Radix{
	private:	
		int length;	
		int* numbers;
		Queue<int> **queues;
		int maxStep;
		
		int StepCount(int);		
		int MaxStepNumber();
		int* QueueCurrentLengths();
	public:
		Radix(int*, int);
		int* Sort();
		~Radix();
};

#endif
