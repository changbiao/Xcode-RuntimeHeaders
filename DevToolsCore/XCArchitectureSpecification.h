/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <DevToolsCore/XCSpecification.h>

@class NSArray, NSString;

@interface XCArchitectureSpecification : XCSpecification
{
    long long _byteOrder;
    NSString *_canonicalName;
    NSString *_userVisibleName;
    NSArray *_realArchitectures;
    NSString *_architectureSetting;
    _Bool _isShownInPopup;
    int _sortNumber;
    NSArray *_compatibilityArchs;
}

+ (id)validArchitectureCanonicalNamesInDomain:(id)arg1;
+ (id)specificationRegistryName;
+ (id)specificationTypePathExtensions;
+ (id)localizedSpecificationTypeName;
+ (id)specificationType;
+ (Class)specificationTypeBaseClass;
- (id)compatibilityArchitectures;
- (int)sortNumber;
- (_Bool)isShownInPopup;
- (id)architectureSetting;
- (id)realArchitectures;
- (id)userVisibleName;
- (id)canonicalName;
- (long long)byteOrder;
- (void)dealloc;
- (id)initWithPropertyListDictionary:(id)arg1 inDomain:(id)arg2;

@end

