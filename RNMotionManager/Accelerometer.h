//
//  Accelerometer.h
//
//  Created by Patrick Williams in beautiful Seattle, WA.
//

#if __has_include(<React/RCTBridgeModule.h>)
#import <React/RCTBridgeModule.h>
#else
#import "RCTBridgeModule.h"
#endif
#import <CoreMotion/CoreMotion.h>

@interface Accelerometer : NSObject <RCTBridgeModule> {
  CMMotionManager *_motionManager;
}
- (void) setAccelerometerUpdateInterval:(double) interval;
- (void) getAccelerometerUpdateInterval:(RCTResponseSenderBlock) cb;
- (void) getAccelerometerData:(RCTResponseSenderBlock) cb;
- (void) startAccelerometerUpdates;
- (void) stopAccelerometerUpdates;

@end
