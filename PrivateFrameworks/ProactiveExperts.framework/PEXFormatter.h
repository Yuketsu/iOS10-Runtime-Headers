/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ProactiveExperts.framework/ProactiveExperts
 */

@interface PEXFormatter : NSObject {
    NSCache * _dateFormatCache;
    long long  _dateFormatCacheOnce;
    NSDateFormatter * _dateFormatter;
    NSURL * _labeledValueLocalizationURL;
    NSLocale * _locale;
    NSCache * _localizedLabelCache;
    long long  _localizedLabelCacheOnce;
    NSDictionary * _queryCriteria;
}

+ (id)formatterWithQueryCriteria:(id)arg1;
+ (id)keyDictionary:(id)arg1;

- (void).cxx_destruct;
- (id)_dateFormatForTemplate:(id)arg1;
- (id)_dateFromComponents:(id)arg1 destinationCalendar:(id)arg2;
- (bool)_isYearlessComponents:(id)arg1;
- (void)_precacheDateFormats;
- (void)_precacheLabelLocalizations;
- (id)formattedBirthday:(id)arg1;
- (id)formattedEventTime:(id)arg1;
- (id)formattedStringForLabel:(id)arg1;
- (id)init;
- (id)initWithQueryCriteria:(id)arg1;

@end