/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer
 */

@interface ISPlayerContent : NSObject {
    ISCrossfadeItem * _crossfadeItem;
    struct CGImage { } * _photo;
    int  _photoEXIFOrientation;
    bool  _photoHasColorAdjustments;
    double  _photoTime;
    float  _videoCropFactor;
    AVPlayerItem * _videoPlayerItem;
}

@property (nonatomic, readonly) ISCrossfadeItem *crossfadeItem;
@property (nonatomic, readonly) struct CGImage { }*photo;
@property (nonatomic, readonly) int photoEXIFOrientation;
@property (nonatomic, readonly) bool photoHasColorAdjustments;
@property (nonatomic, readonly) double photoTime;
@property (nonatomic, readonly) float videoCropFactor;
@property (nonatomic, readonly) AVPlayerItem *videoPlayerItem;

- (void).cxx_destruct;
- (id)crossfadeItem;
- (void)dealloc;
- (unsigned long long)hash;
- (id)initWithPhoto:(struct CGImage { }*)arg1 photoEXIFOrientation:(int)arg2 photoTime:(double)arg3 photoHasColorAdjustments:(bool)arg4 videoPlayerItem:(id)arg5 videoCropFactor:(float)arg6 crossfadeItem:(id)arg7;
- (bool)isEqual:(id)arg1;
- (struct CGImage { }*)photo;
- (int)photoEXIFOrientation;
- (bool)photoHasColorAdjustments;
- (double)photoTime;
- (float)videoCropFactor;
- (id)videoPlayerItem;

@end