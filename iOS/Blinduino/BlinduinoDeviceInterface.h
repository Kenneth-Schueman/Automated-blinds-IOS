#import <Foundation/Foundation.h>
#import "SimplePing.h"

/* Notification Strings */
extern const NSString *BlinduinoDeviceConnectionStatusChangedNotification;
extern const NSString *BlinduinoRequestSucceededNotification;
extern const NSString *BlinduinoRequestFailedNotification;

@interface BlinduinoDeviceInterface : NSObject <SimplePingDelegate>

+ (instancetype)sharedInstance;

- (BOOL)openBlinds;
- (BOOL)closeBlinds;
- (BOOL)setOpenTime:(NSDate *)openTime;

@property (nonatomic, readonly) BOOL deviceAvailable;

@end
