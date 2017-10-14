//
//  Gyroscope.h
//
//  Created by Patrick Williams in beautiful Seattle, WA.
//

#if __has_include(<React/RCTBridgeModule.h>)
#import <React/RCTBridgeModule.h>
#else
#import "RCTBridgeModule.h"
#endif
#import <CoreMotion/CoreMotion.h>

@interface Gyroscope : NSObject <RCTBridgeModule> {
    CMMotionManager *_motionManager;
}
- (void) setGyroUpdateInterval:(double) interval;
- (void) getGyroUpdateInterval:(RCTResponseSenderBlock) cb;
- (void) getGyroData:(RCTResponseSenderBlock) cb;
- (void) startGyroUpdates;
- (void) stopGyroUpdates;

@end
