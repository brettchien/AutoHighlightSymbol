/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <AppKit/NSLayoutManager.h>

@class DVTFoldingManager, DVTTextFoldInlineTokenAttachmentCell, NSCell;

@interface DVTFoldingLayoutManager : NSLayoutManager
{
	DVTFoldingManager *_foldingManager;
	NSCell *_blockFoldCell;
	DVTTextFoldInlineTokenAttachmentCell *_inlineFoldCell;
}

+ (id)layoutLogAspect;
@property(copy) DVTTextFoldInlineTokenAttachmentCell *inlineFoldCell; // @synthesize inlineFoldCell=_inlineFoldCell;
@property(copy) NSCell *blockFoldCell; // @synthesize blockFoldCell=_blockFoldCell;
@property(readonly) DVTFoldingManager *foldingManager; // @synthesize foldingManager=_foldingManager;
- (unsigned long long)characterIndexForPoint:(struct CGPoint)arg1 inTextContainer:(id)arg2 fractionOfDistanceBetweenInsertionPoints:(double *)arg3;
- (id)foldCellAtCharacterIndex:(unsigned long long)arg1;
- (struct CGSize)attachmentSizeForGlyphAtIndex:(unsigned long long)arg1;
- (void)drawGlyphsForGlyphRange:(struct _NSRange)arg1 atPoint:(struct CGPoint)arg2;
- (void)foldingManager:(id)arg1 didUnfoldRange:(struct _NSRange)arg2;
- (void)foldingManager:(id)arg1 didFoldRange:(struct _NSRange)arg2;
- (void)_invalidateGlyphsInCharacterRange:(struct _NSRange)arg1;
- (struct _NSRange)_paragraphExtendedCharacterRange:(struct _NSRange)arg1;
- (void)textStorage:(id)arg1 edited:(unsigned long long)arg2 range:(struct _NSRange)arg3 changeInLength:(long long)arg4 invalidatedRange:(struct _NSRange)arg5;
- (void)_invalidateGlyphsForExtendedCharacterRange:(struct _NSRange)arg1 changeInLength:(long long)arg2 includeBlocks:(BOOL)arg3;
- (struct _NSRange)_extendedCharRangeForInvalidation:(struct _NSRange)arg1 editedCharRange:(struct _NSRange)arg2;
- (void)generateInlineFoldsForCharacterRange:(struct _NSRange)arg1;
- (struct _NSRange)paragraphRangeForLineRange:(struct _NSRange)arg1;
- (struct CGSize)layoutSizeForFoldAtCharacterIndex:(unsigned long long)arg1;
- (BOOL)foldsAreValid:(id)arg1;
- (void)setTextStorage:(id)arg1;
- (void)enableTextFolding:(BOOL)arg1;
- (id)textStorage;

@end
