// RawTone.h

#ifndef _RAWTONE_h
#define _RAWTONE_h

#if defined(ARDUINO) && ARDUINO >= 100
	#include "arduino.h"
#else
	#include "WProgram.h"
#endif
class RawTone {
private:
	unsigned int
		myFrequency;
	unsigned long
		myDuration;

protected:
	void init(unsigned int freq, unsigned long dur) {
		myFrequency = freq;
		myDuration = dur;
	}

public:
	unsigned int getFrequency() {
		return myFrequency;
	}
	unsigned long getDuration() {
		return myDuration;
	}
	RawTone(unsigned int freq, unsigned long dur) {
		init(freq, dur);
	}

};

#endif

