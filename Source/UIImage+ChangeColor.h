//
//  UIImage+ChangeColor.h
//  
//
//  Created by Vijay Sridhar on 7/11/14.
//
//

@interface UIImage (ChangeColor)

- (UIImage *)imageWithOverlayColor:(UIColor *)color;
- (UIImage *)resizedImageToSize:(CGSize)dstSize;
- (UIImage *)resizedImageToFitInSize:(CGSize)boundingSize scaleIfSmaller:(BOOL)scale;

@end
