/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPSubscriptionQueueFeeder : MPQueueFeeder <MPStoreAVItemDownloadMetadataConsuming> {
    MPPlaceholderAVItem * _placeholderAVItem;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)audioSessionModeForItemAtIndex:(unsigned long long)arg1;
- (void)storeAVItem:(id)arg1 didReceiveResponseAssetDictionary:(id)arg2;

@end
