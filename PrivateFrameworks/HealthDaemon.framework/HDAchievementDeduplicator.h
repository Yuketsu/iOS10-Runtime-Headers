/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDAchievementDeduplicator : NSObject

+ (unsigned long long)_deduplicationStrategyForAchievementDefinitionIdentifier:(id)arg1;
+ (unsigned long long)_equalityCheckCalendarUnitForAchievementDefinitionIdentifier:(id)arg1;
+ (unsigned long long)_pickWinningAchievementWithAdded:(id)arg1 existing:(id)arg2 strategy:(unsigned long long)arg3;
+ (bool)_shouldCheckValueEqualityForAchievementDefinitionIdentifier:(id)arg1;
+ (unsigned long long)_tiebreakingStrategyForAchievementDefinitionIdentifier:(id)arg1;
+ (void)findDuplicatesInAddedAchievements:(id)arg1 existingAchievements:(id)arg2 foundDuplicatesInAdded:(id*)arg3 duplicatesInExisting:(id*)arg4;

@end