/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@interface DYFunctionStreamModifier : NSObject
{
    id _block;
}

- (void).cxx_destruct;
- (void)analyzeFunctionInArchiveModifier:(id)arg1;
- (BOOL)shouldAnalyze;
- (void)onBeginFileInArchiveModifier:(id)arg1;
- (BOOL)processFunctionInArchiveModifier:(id)arg1;
- (id)initWithBlock:(id)arg1;

@end
