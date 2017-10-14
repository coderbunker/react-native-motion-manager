#if __has_include(<React/RCTBridgeModule.h>)
#import <React/RCTBridgeModule.h>
#else
#import "RCTBridgeModule.h"
#endif
#import <CoreMotion/CoreMotion.h>

@interface DeviceMotion : NSObject <RCTBridgeModule> {
  CMMotionManager *_motionManager;
}
- (void) setDeviceMotionUpdateInterval:(double) interval;
- (void) getDeviceMotionUpdateInterval:(RCTResponseSenderBlock) cb;
- (void) getDeviceMotionData:(RCTResponseSenderBlock) cb;
- (void) startDeviceMotionUpdates;
- (void) stopDeviceMotionUpdates;

@end
