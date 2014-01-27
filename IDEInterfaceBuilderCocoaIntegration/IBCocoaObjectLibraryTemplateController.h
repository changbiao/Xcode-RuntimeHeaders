/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "IBObjectLibraryTemplateController.h"

@class IBCocoaPopoverLibraryObjectTemplate, IBCocoaSourceListLibraryObjectTemplate, IBCocoaWindowAndDrawerLibraryObjectTemplate, IBLibraryObjectTemplate;

@interface IBCocoaObjectLibraryTemplateController : IBObjectLibraryTemplateController
{
    IBLibraryObjectTemplate *texturedWindowTemplate;
    IBLibraryObjectTemplate *windowTemplate;
    IBLibraryObjectTemplate *panelTemplate;
    IBLibraryObjectTemplate *headsUpDisplayTemplate;
    IBCocoaWindowAndDrawerLibraryObjectTemplate *drawerTemplate;
    IBLibraryObjectTemplate *collectionViewTemplate;
    IBLibraryObjectTemplate *openGLViewTemplate;
    IBLibraryObjectTemplate *standardConfigureToolbarItemTemplate;
    IBLibraryObjectTemplate *standardFontToolbarItemTemplate;
    IBLibraryObjectTemplate *standardColorToolbarItemTemplate;
    IBLibraryObjectTemplate *standardSeparatorToolbarItemTemplate;
    IBLibraryObjectTemplate *standardSpaceToolbarItemTemplate;
    IBLibraryObjectTemplate *standardPrintToolbarItemTemplate;
    IBLibraryObjectTemplate *standardFlexibleSpaceToolbarItemTemplate;
    IBLibraryObjectTemplate *multilineBorderedTextFieldTemplate;
    IBLibraryObjectTemplate *multilineLabelTemplate;
    IBLibraryObjectTemplate *labelTemplate;
    IBLibraryObjectTemplate *imageWellTemplate;
    IBLibraryObjectTemplate *textMenuTemplate;
    IBLibraryObjectTemplate *fontMenuTemplate;
    IBLibraryObjectTemplate *formatMenuTemplate;
    IBLibraryObjectTemplate *applicationMenuTemplate;
    IBLibraryObjectTemplate *windowsMenuTemplate;
    IBLibraryObjectTemplate *fileMenuTemplate;
    IBLibraryObjectTemplate *helpMenuTemplate;
    IBLibraryObjectTemplate *editMenuTemplate;
    IBLibraryObjectTemplate *findMenuTemplate;
    IBLibraryObjectTemplate *textFieldWithNumberFormatterTemplate;
    IBLibraryObjectTemplate *numberFormatterTemplate;
    IBLibraryObjectTemplate *dateFormatterTemplate;
    IBLibraryObjectTemplate *treeControllerTemplate;
    IBLibraryObjectTemplate *tableCellViewTemplate;
    IBLibraryObjectTemplate *textOnlyTableCellViewTemplate;
    IBLibraryObjectTemplate *enterFullScreenTemplate;
    IBLibraryObjectTemplate *pageControllerTemplate;
    IBCocoaPopoverLibraryObjectTemplate *popoverTemplate;
    IBCocoaSourceListLibraryObjectTemplate *sourceListTemplate;
    IBLibraryObjectTemplate *byteCountFormatter;
}

- (void).cxx_destruct;
- (id)pasteboardObjectsForTemplate:(id)arg1;
- (id)windowTemplateForWindowObjectTemplate:(id)arg1;
- (void)document:(id)arg1 didAddDraggedObjects:(id)arg2 fromDraggedObjectLibraryTemplate:(id)arg3;
- (BOOL)isMenuItemTemplate:(id)arg1;
- (BOOL)shouldIncludeTemplate:(id)arg1;

@end
