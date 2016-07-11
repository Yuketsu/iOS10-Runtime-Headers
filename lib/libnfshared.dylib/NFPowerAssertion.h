/* Generated by RuntimeBrowser
   Image: /usr/lib/libnfshared.dylib
 */

@interface NFPowerAssertion : NSObject {
    NSMutableArray * _assertionHolders;
    unsigned int  _assertionID;
    unsigned int  _powerNotificationConnection;
    unsigned int  _powerNotificationNotifier;
    struct IONotificationPort { } * _powerNotificationPort;
}

+ (id)sharedPowerAssertion;

- (void)dealloc;
- (bool)holdPowerAssertion:(id)arg1;
- (id)init;
- (bool)releasePowerAssertion:(id)arg1;

@end