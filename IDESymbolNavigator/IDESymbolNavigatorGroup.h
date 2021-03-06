/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class IDESymbolNavigator, NSArray, NSOperationQueue, NSString;

@interface IDESymbolNavigatorGroup : NSObject
{
    NSOperationQueue *_queue;
    NSArray *_children;
    NSArray *_newChildren;
    NSString *_subtitle;
    unsigned long long _generation;
    IDESymbolNavigator *_navigator;
}

@property __weak IDESymbolNavigator *navigator; // @synthesize navigator=_navigator;
- (void).cxx_destruct;
- (id)navigableItem_image;
@property(readonly) NSString *symbolKindIdentifier;
- (void)fetchSymbols:(id)arg1 lastOperation:(id)arg2;
- (id)children;
- (void)refreshWithIndex:(id)arg1 generation:(unsigned long long)arg2 lastOperation:(id)arg3;
- (void)refreshWithIndex:(id)arg1 lastOperation:(id)arg2;
- (id)childrenWithIndex:(id)arg1;
- (id)unsortedSymbolsWithIndex:(id)arg1;
- (id)ideModelObjectTypeIdentifier;
- (id)navigableItem_documentType;
- (id)navigableItem_contentDocumentLocation;
- (id)calculateSubtitleWithIndex:(id)arg1;
- (unsigned long long)_systemSymbolCount;
- (unsigned long long)_userSymbolCount;
- (id)_subtitleWithUserCount:(unsigned long long)arg1 systemCount:(unsigned long long)arg2;
- (id)navigatorSymbolForIndexSymbol:(id)arg1;
@property(readonly) NSString *subtitle;
- (id)navigableItem_name;
@property(readonly) BOOL isInProject;
- (id)initWithOperationQueue:(id)arg1 generation:(unsigned long long)arg2 symbolNavigator:(id)arg3;

@end

