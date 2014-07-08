/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class NSString, SKUIImageViewElement, SKUIViewElementText;

@interface SKUIButtonViewElement : SKUIViewElement  {
    NSString *_badgeResourceName;
    SKUIViewElementText *_buttonText;
    long long _buttonViewType;
    NSString *_confirmationText;
    BOOL _enabled;
    long long _itemIdentifier;
    NSString *_variantIdentifier;
}

@property(readonly) long long buttonViewType;
@property(readonly) SKUIViewElementText * buttonText;
@property(readonly) NSString * confirmationText;
@property(readonly) NSString * badgeResourceName;
@property(readonly) SKUIImageViewElement * buttonImage;
@property(readonly) long long itemIdentifier;
@property(readonly) NSString * variantIdentifier;


- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;
- (id)applyUpdatesWithElement:(id)arg1;
- (unsigned long long)elementType;
- (id)badgeResourceName;
- (long long)buttonViewType;
- (bool)canPersonalizeUsingItemState:(id)arg1;
- (id)personalizationLibraryItems;
- (bool)canPerformLocalActionWithItemState:(id)arg1;
- (id)confirmationText;
- (id)buttonText;
- (long long)pageComponentType;
- (id)variantIdentifier;
- (long long)itemIdentifier;
- (bool)isEnabled;
- (void).cxx_destruct;
- (id)description;
- (id)buttonImage;

@end