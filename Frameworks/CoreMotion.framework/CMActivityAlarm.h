/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSObject<OS_dispatch_queue>;

@interface CMActivityAlarm : NSObject  {
    BOOL fIsValid;
    struct __CFRunLoop { } *fRunLoop;
    NSObject<OS_dispatch_queue> *fQueue;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id fHandler;

    unsigned int _trigger;
    double _duration;
}

@property double duration;
@property unsigned int trigger;

+ (id)activityAlarmInfo;
+ (BOOL)activityAlarmAvailable;

- (id)initWithTrigger:(unsigned int)arg1 duration:(double)arg2 onRunLoop:(struct __CFRunLoop { }*)arg3 withHandler:(id)arg4;
- (id)initWithTrigger:(unsigned int)arg1 duration:(double)arg2 onQueue:(id)arg3 withHandler:(id)arg4;
- (void)setTrigger:(unsigned int)arg1;
- (unsigned int)trigger;
- (void)setDuration:(double)arg1;
- (BOOL)isValid;
- (void)invalidate;
- (void)dealloc;
- (double)duration;
- (void)fire;

@end