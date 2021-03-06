/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "DVTInvalidation-Protocol.h"

@class DVTStackBacktrace, Xcode3Target;

@interface Xcode3TargetCoordinator : NSObject <DVTInvalidation>
{
    Xcode3Target *_target;
}

+ (void)initialize;
@property(retain, nonatomic) Xcode3Target *target; // @synthesize target=_target;
- (void).cxx_destruct;
- (void)primitiveInvalidate;
- (id)initWithTarget:(id)arg1;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

