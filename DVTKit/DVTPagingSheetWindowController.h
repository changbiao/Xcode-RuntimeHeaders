/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSWindowController.h"

#import "DVTInvalidation-Protocol.h"

@class DVTStackBacktrace, DVTViewController;

@interface DVTPagingSheetWindowController : NSWindowController <DVTInvalidation>
{
    DVTViewController *_contentViewController;
    id _completionBlock;
}

+ (BOOL)automaticallyNotifiesObserversOfContentViewController;
+ (void)initialize;
+ (id)defaultWindowNibName;
@property(copy, nonatomic) id completionBlock; // @synthesize completionBlock=_completionBlock;
@property(retain, nonatomic) DVTViewController *contentViewController; // @synthesize contentViewController=_contentViewController;
- (void).cxx_destruct;
- (void)dvt_sheetDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (void)beginSheetModalForWindow:(id)arg1 completionBlock:(id)arg2;
- (void)didEndSheetWithReturnCode:(long long)arg1;
- (void)willBeginSheet;
@property(retain, nonatomic) Class contentViewControllerClass;
- (void)primitiveInvalidate;
- (void)windowDidLoad;
- (id)init;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

