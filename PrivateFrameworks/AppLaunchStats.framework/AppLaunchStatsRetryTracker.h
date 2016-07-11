/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppLaunchStats.framework/AppLaunchStats
 */

@interface AppLaunchStatsRetryTracker : NSObject {
    unsigned long long  _maxRetry;
    NSObject<OS_dispatch_queue> * _rTrackerQueue;
    unsigned long long  _resetTime;
    NSDate * _resetTrackerDate;
    NSMutableDictionary * _tracker;
}

- (void).cxx_destruct;
- (bool)hasTooManyRetries:(id)arg1;
- (id)init;
- (void)resetTime;
- (void)updateRetryCountFor:(id)arg1 withCount:(long long)arg2;

@end