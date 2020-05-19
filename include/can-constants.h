#ifndef _CAN_CONSTANTS_H_
#define _CAN_CONSTANTS_H_

#ifdef __cplusplus
extern "C" {
#endif
	
	uint16_t statusWord  = 0x6041;
	
	uint16_t controlWord      = 0x6040;
	uint32_t shutDown         = 0x0006;
	uint32_t switchOn         = 0x0007;
	uint32_t faultReset       = 0x0080;
	uint32_t enableOperation  = 0x000F;
	uint32_t enOp_startHoming = 0x001F; 

	uint16_t switchModeOfOperation = 0x6060; 
	uint32_t homingMode            = 0x0006;
	uint32_t positionMode          = 0x0001;
	uint32_t speedMode             = 0x0003;
	uint32_t interpolatedPositionMode = 0x0007;
	
	uint32_t profileAcceleration = 0x6083;
	uint32_t profileDeceleration = 0x6084;
	uint32_t maxAllowedSpeed     = 0x607F;
	uint32_t targetSpeed         = 0x60FF;
	
	uint32_t setHomingMethod = 0x6098;
	uint32_t setHomingSpeed  = 0x6099;
	uint32_t setHomingAcc    = 0x609A;
	
	uint32_t setHomingSwitches = 0x2310;
	uint32_t notifySwitch      = 0x2311;
	
	uint32_t warning = 0x3024;
	uint32_t comCyclePeriod = 0x1006;
	uint32_t syncControl = 0x2006;

#ifdef __cplusplus
}
#endif

#endif /* _CAN_CONSTANTS_H_ */

// homingMode
//	  1 to 14: homing with index pulse
//	 17 to 30: homing without index pulse
//	 33 to 34: homing at index pulse
//	 35: homing at actual position