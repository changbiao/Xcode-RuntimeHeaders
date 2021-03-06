/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <IDEKit/IDEInspectorProperty.h>

@class DVTFilePathField, IDEInspectorKeyPath, NSString;

@interface IDEInspectorPathFieldProperty : IDEInspectorProperty
{
    DVTFilePathField *_filePathField;
    IDEInspectorKeyPath *_valueKeyPath;
    IDEInspectorKeyPath *_placeholderKeyPath;
    NSString *_placeholder;
    IDEInspectorKeyPath *_choosePathMessageKeyPath;
    NSString *_choosePathMessage;
    IDEInspectorKeyPath *_linkPathKeyPath;
    IDEInspectorKeyPath *_choosePathDefaultFilePathKeyPath;
    IDEInspectorKeyPath *_shouldChooseFileKeyPath;
    IDEInspectorKeyPath *_shouldChooseDirKeyPath;
    BOOL _shouldChooseFile;
    BOOL _shouldChooseDir;
}

- (void).cxx_destruct;
- (void)DVTFilePathFieldCell:(id)arg1 chooserSelectedPath:(id)arg2;
- (void)userDidChangeValue:(id)arg1;
- (void)primitiveInvalidate;
- (void)setupRefreshTriggersAndConfigure;
- (void)refresh;
- (id)view;
- (double)baseline;

@end

