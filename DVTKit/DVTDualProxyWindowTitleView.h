/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSView.h"

@class DVTNotificationToken, DVTWindowProxyDragButton, NSImage, NSString, NSURL;

@interface DVTDualProxyWindowTitleView : NSView
{
    DVTWindowProxyDragButton *_primaryDragButton;
    DVTWindowProxyDragButton *_secondaryDragButton;
    NSString *_primaryName;
    NSImage *_primaryImage;
    NSString *_secondaryName;
    NSImage *_secondaryImage;
    DVTNotificationToken *_frameChangeToken;
}

+ (id)_titleCell;
- (void).cxx_destruct;
- (BOOL)mouseDownCanMoveWindow;
- (void)rightMouseDown:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)_drawText:(id)arg1 inRect:(struct CGRect)arg2;
- (void)_superViewFrameDidChange:(id)arg1;
- (void)viewDidMoveToSuperview;
- (void)viewWillMoveToSuperview:(id)arg1;
- (void)_updateFrame;
- (void)_updateDragButtons;
- (struct CGRect)dvt_maxTitlebarTitleRect;
- (void)_getTitlePrefixRect:(struct CGRect *)arg1 titlePrefixSeparatorRect:(struct CGRect *)arg2 primaryImageRect:(struct CGRect *)arg3 primaryTitleRect:(struct CGRect *)arg4 separatorRect:(struct CGRect *)arg5 secondaryImageRect:(struct CGRect *)arg6 secondaryTitleRect:(struct CGRect *)arg7;
- (struct CGSize)_desiredSize;
- (struct CGSize)_titlePrefixSize;
- (struct CGSize)_secondaryTitleSize;
- (struct CGSize)_secondaryImageSize;
- (struct CGSize)_separatorSize;
- (struct CGSize)_primaryTitleSize;
- (struct CGSize)_primaryImageSize;
- (struct CGSize)_sizeForString:(id)arg1;
@property(readonly) DVTWindowProxyDragButton *_secondaryDragButton;
@property(readonly) DVTWindowProxyDragButton *_primaryDragButton;
- (void)invalidateTitle;
- (void)_getDocumentIcon:(id *)arg1 andDisplayName:(id *)arg2 forURL:(id)arg3;
@property(readonly) NSString *title;
@property(readonly) NSString *titlePrefix;
- (void)_setSecondaryName:(id)arg1 andImage:(id)arg2;
- (void)_setPrimaryName:(id)arg1 andImage:(id)arg2;
@property(readonly) NSString *secondaryName;
@property(readonly) NSImage *secondaryImage;
@property(readonly) NSString *primaryName;
@property(readonly) NSImage *primaryImage;
@property(readonly) NSURL *secondaryRepresentedURL;
@property(readonly) NSURL *primaryRepresentedURL;
- (id)_dualProxyWindow;

@end

