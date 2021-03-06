/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSError;

@interface IBAsyncIOSerializer : NSObject
{
    struct dispatch_semaphore_s *_semaphore;
    BOOL _success;
    NSError *_error;
    id _completionCallback;
}

@property(readonly) id completionCallback; // @synthesize completionCallback=_completionCallback;
@property(retain) NSError *error; // @synthesize error=_error;
@property BOOL success; // @synthesize success=_success;
- (void).cxx_destruct;
- (void)waitForCompletion;
- (id)init;

@end

