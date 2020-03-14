#include "Hysteresis.h"

/*
 * A hysteresis controller
 * @param onThreshold the value to turn on
 * @param offThreshold the value to turn off
 */
HysteresisController::HysteresisController(float onThreshold, float offThreshold){
    onThreshold_ = onThreshold;
    offThreshold_ = offThreshold;
}

/*
 * Calculate the state of the hysteresis controller
 * @param input the current input value
 */
bool HysteresisController::calculate(float input){
   if (wasOn_ && input <= offThreshold_) {
       wasOn_ = false;
	} else if (!wasOn_ && input >= onThreshold_) {
		wasOn_ = true;
	}

	return wasOn_;
}