/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <DevToolsCore/XCDistributedBuildHost.h>

@interface XCRemoteVolunteer : XCDistributedBuildHost
{
}

+ (id)distributedBuildHostWithSpec:(id)arg1;
- (void)setBonjourServiceName:(id)arg1;
- (id)bonjourServiceName;
- (id)statusString;
- (id)description;
- (BOOL)hasCompiler:(id)arg1;
- (BOOL)isCompatibleHost;
- (id)compilerVersionStrings;
- (void)setIsReachable:(BOOL)arg1;
- (id)initWithHostSpec:(id)arg1;

@end

