/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@class NSString;

@interface CKRecordZoneID : NSObject <NSSecureCoding, NSCopying> {
    NSString *_zoneName;
    NSString *_ownerName;
}

@property(retain) NSString * zoneName;
@property(retain) NSString * ownerName;

+ (bool)supportsSecureCoding;

- (id)initWithSqliteRepresentation:(id)arg1;
- (void)setOwnerName:(id)arg1;
- (void)setZoneName:(id)arg1;
- (id)sqliteRepresentation;
- (id)ckShortDescription;
- (id)initWithZoneName:(id)arg1 ownerName:(id)arg2;
- (id)ownerName;
- (id)zoneName;
- (id)CKPropertiesDescription;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;

@end