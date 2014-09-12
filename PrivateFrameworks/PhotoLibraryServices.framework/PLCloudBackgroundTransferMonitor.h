/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@class NSObject<OS_dispatch_queue>, NSMutableDictionary;

@interface PLCloudBackgroundTransferMonitor : NSObject  {
    NSObject<OS_dispatch_queue> *_isolationQueue;
    NSMutableDictionary *_pendingBGTransfers;
}

+ (id)identifierForResource:(id)arg1;
+ (id)sharedInstance;

- (void)abandonTransfersForItemIdentifier:(id)arg1;
- (void)completeBackgroundTransferWithIdentifier:(id)arg1 withError:(id)arg2;
- (void)onCompletedResource:(id)arg1 invokeBlock:(id)arg2;
- (void)abandonAllBackgroundTransfers;
- (void)completeBackgroundTransferForResource:(id)arg1 withError:(id)arg2;
- (id)init;
- (void)dealloc;

@end