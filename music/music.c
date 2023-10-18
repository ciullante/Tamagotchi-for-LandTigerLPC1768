#include "music.h"
#include "../sprite_wrapper/wrapper.h"
#include "../timer/timer.h"

void playNote(NOTE note)
{
	if(note.freq != pause)
	{
		reset_timer(0);
		init_timer(0, note.freq);
		enable_timer(0);
	}
	reset_timer(1);
	init_timer(1, note.duration);
	enable_timer(1);
}

BOOL isNotePlaying(void)
{
	return ((LPC_TIM0->TCR != 0) || (LPC_TIM1->TCR != 0));
}


typedef struct song {uint32_t n; NOTE notes[10];} Song;

void initSong(uint8_t song_number){
	
}


/* 																		Volume 																									*/

uint16_t volumeIntervals[12] = {0, 372, 744, 1116, 1488, 1860, 2232, 2604, 2976, 3348, 3720, 4096};
uint8_t volume;

void updateVolume(uint8_t new_volume){
	
	if (new_volume != volume){	
		volume = new_volume;
		drawVolumeStatus();
	}
	return;
}

void adjustVolume(uint16_t x){
	uint8_t low, high, mid;
	low = 0;
	high = 10;

	// binary search
	do{
		mid = (high + low)/2;
		if( x >= volumeIntervals[mid] && x < volumeIntervals[mid + 1]){
			updateVolume(mid);
			return;
		}
		else if ( x >= volumeIntervals[mid + 1]) low = mid + 1;
		else if ( x < volumeIntervals[mid]) high = mid - 1;
	} while( low != high);
	mid = low;
	updateVolume(mid);
	return;
}

