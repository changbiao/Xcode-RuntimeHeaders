/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <IDEFoundation/IDELocalizedResourceAdaptor.h>

@class IDENotifyingLocalizedGroup, NSDictionary, NSMutableDictionary, NSString;

@interface IDELocalizedSourceStringsAdaptor : IDELocalizedResourceAdaptor
{
    NSString *_tableName;
    NSDictionary *_sourceStrings;
    NSDictionary *_sourceComments;
    NSMutableDictionary *_stringsCache;
    IDENotifyingLocalizedGroup *_notifyingGroup;
}

+ (id)writeWorkForContext:(id)arg1 langauge:(id)arg2;
+ (id)readWorkForContext:(id)arg1;
- (void).cxx_destruct;
- (id)target;
- (id)expectedSuperitem;
- (id)expectedAbsolutePath;
- (id)notifyingGroup;
- (id)tableName;
- (id)commentsByKey;
- (void)setStringsByKey:(id)arg1 forLanguage:(id)arg2;
- (id)stringsByKeyForLanguage:(id)arg1;
- (void)primitiveInvalidate;
- (id)initWithLocalizedContainer:(id)arg1 localizedGroup:(id)arg2 tableName:(id)arg3 sourceStrings:(id)arg4 sourceComments:(id)arg5;

@end
