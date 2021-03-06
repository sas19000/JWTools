//
//  UIImage+JWKit.h
//  AppKitLibrary
//
//  Created by jinwei on 15/10/19.
//  Copyright © 2015年 jinwei group. All rights reserved.
//

#import <UIKit/UIKit.h>
@import Foundation;
@import UIKit;
@import Accelerate;
@import CoreImage;

#import "UIFont+JWKit.h"


@interface UIImage (JWKit)

/**
 *  Create a dummy image
 *
 *  @param name To use it, name parameter must contain: "dummy.100x100" and "dummy.100x100.#FFFFFF" or "dummy.100x100.blue" (if it's a color defined in UIColor class) if you want to define a color
 *
 *  @return Returns the created dummy image
 */
+ (UIImage *)dummyImageNamed:(NSString *)name;

/**
 *  Apply the given Blend Mode
 *
 *  @param blendMode The choosed Blend Mode
 *
 *  @return Returns the image
 */
- (UIImage *)blendMode:(CGBlendMode)blendMode;

/**
 *  Apply the Blend Mode Overlay
 *
 *  @return Returns the image
 */
- (UIImage *)blendOverlay;

/**
 *  Mask self with another image and size
 *
 *  @param image Mask image
 *  @param size  Mask size
 *
 *  @return Returns the masked image
 */
- (UIImage *)maskWithImage:(UIImage *)image
                   andSize:(CGSize)size DEPRECATED_MSG_ATTRIBUTE("Use -setMaskImage from UIImageView instance method");

/**
 *  Mask self with another image
 *
 *  @param image Mask image
 *
 *  @return Returns the masked image
 */
- (UIImage *)maskWithImage:(UIImage *)image DEPRECATED_MSG_ATTRIBUTE("Use -setMaskImage from UIImageView instance method");

/**
 *  Create an image from a given rect of self
 *
 *  @param rect Rect to take the image
 *
 *  @return Returns the image from a given rect
 */
- (UIImage *)imageAtRect:(CGRect)rect;

/**
 *  Scale the image proportionally to the given size
 *
 *  @param targetSize The site to scale to
 *
 *  @return Returns the scaled image
 */
- (UIImage *)imageByScalingProportionallyToSize:(CGSize)targetSize;

/**
 *  Scale the image to the minimum given size
 *
 *  @param targetSize The site to scale to
 *
 *  @return Returns the scaled image
 */
- (UIImage *)imageByScalingProportionallyToMinimumSize:(CGSize)targetSize;

/**
 *  Scale the image to the maxinum given size
 *
 *  @param maxSize The site to scale to
 *
 *  @return Returns the scaled image
 */
- (UIImage *)imageByScalingProportionallyToMaximumSize:(CGSize)targetSize;

/**
 *  Scele the iamge to the given size
 *
 *  @param targetSize The site to scale to
 *
 *  @return Returns the scaled image
 */
- (UIImage *)imageByScalingToSize:(CGSize)targetSize;

/**
 *  Rotate the image to the given radians
 *
 *  @param radians Radians to rotate to
 *
 *  @return Returns the rotated image
 */
- (UIImage *)imageRotatedByRadians:(CGFloat)radians;

/**
 *  Rotate the image to the given degrees
 *
 *  @param radians Degrees to rotate to
 *
 *  @return Returns the rotated image
 */
- (UIImage *)imageRotatedByDegrees:(CGFloat)degrees;

/**
 *  Check if the image has alpha
 *
 *  @return Returns YES if has alpha, NO if not
 */
- (BOOL)hasAlpha;

/**
 *  Remove the alpha of the image
 *
 *  @return Returns the image without alpha
 */
- (UIImage *)removeAlpha;

/**
 *  Fill the alpha with the white color
 *
 *  @return Returns the filled image
 */
- (UIImage *)fillAlpha;

/**
 *  Fill the alpha with the given color
 *
 *  @param color Color to fill
 *
 *  @return Returns the filled image
 */
- (UIImage *)fillAlphaWithColor:(UIColor *)color;

/**
 *  Check if the image is in grayscale
 *
 *  @return Returns YES if is in grayscale, NO if not
 */
- (BOOL)isGrayscale;

/**
 *  Transform the image to grayscale
 *
 *  @return Returns the transformed image
 */
- (UIImage *)imageToGrayscale;

/**
 *  Transform the image to black and white
 *
 *  @return Returns the transformed image
 */
- (UIImage *)imageToBlackAndWhite;

/**
 *  Invert the color of the image
 *
 *  @return Returns the transformed image
 */
- (UIImage *)invertColors;


/**
 *  Apply the bloom effect to the image
 *
 *  @param radius    Radius of the bloom
 *  @param intensity Intensity of the bloom
 *
 *  @return Returns the transformed image
 */
- (UIImage *)bloom:(float)radius
         intensity:(float)intensity;

/**
 *  Apply the blur effect to the image
 *
 *  @param blur Radius of the blur
 *
 *  @return Returns the transformed image
 */
- (UIImage *)boxBlurImageWithBlur:(CGFloat)blur;

/**
 *  Apply the bump distortion effect to the image
 *
 *  @param center Vector of the distortion. Use [CIVector vectorWithX:Y:]
 *  @param radius Radius of the effect
 *  @param scale  Scale of the effect
 *
 *  @return Returns the transformed image
 */
- (UIImage *)bumpDistortion:(CIVector *)center
                     radius:(float)radius
                      scale:(float)scale;

/**
 *  Apply the bump distortion linear effect to the image
 *
 *  @param center Vector of the distortion, use [CIVector vectorWithX:Y:]
 *  @param radius Radius of the effect
 *  @param angle  Angle of the effect in radians
 *  @param scale  Scale of the effect
 *
 *  @return Returns the transformed image
 */
- (UIImage *)bumpDistortionLinear:(CIVector *)center
                           radius:(float)radius
                            angle:(float)angle
                            scale:(float)scale;

/**
 *  Apply the circular splash distortion effect to the image
 *
 *  @param center Vector of the distortion, use [CIVector vectorWithX:Y:]
 *  @param radius Radius of the effect
 *
 *  @return Returns the transformed image
 */
- (UIImage *)circleSplashDistortion:(CIVector *)center
                             radius:(float)radius;

/**
 *  Apply the circular wrap effect to the image
 *
 *  @param center Vector of the distortion, use [CIVector vectorWithX:Y:]
 *  @param radius Radius of the effect
 *  @param angle  Angle of the effect in radians
 *
 *  @return Returns the transformed image
 */
- (UIImage *)circularWrap:(CIVector *)center
                   radius:(float)radius
                    angle:(float)angle;

/**
 *  Apply the CMY halftone effect to the image
 *
 *  @param center    Vector of the distortion, use [CIVector vectorWithX:Y:]
 *  @param width     Width value
 *  @param angle     Angle of the effect in radians
 *  @param sharpness Sharpness Value
 *  @param gcr       GCR value
 *  @param ucr       UCR value
 *
 *  @return Returns the transformed image
 */
- (UIImage *)cmykHalftone:(CIVector *)center
                    width:(float)width
                    angle:(float)angle
                sharpness:(float)sharpness
                      gcr:(float)gcr
                      ucr:(float)ucr;

/**
 *  Apply the sepia filter to the image
 *
 *  @param intensity Intensity of the filter
 *
 *  @return Returns the transformed image
 */
- (UIImage *)sepiaToneWithIntensity:(float)intensity;

/**
 *  Create an image from a given color
 *
 *  @param color Color value
 *
 *  @return Returns the created UIImage
 */
+ (UIImage *)imageWithColor:(UIColor *)color;

/**
 *  Create an image from a given text
 *
 *  @param text      Text
 *  @param fontName  Text's font name
 *  @param fontSize  Text's font size
 *  @param imageSize Image's size
 *
 *  @return Returns the created UIImage
 */
+ (UIImage *)imageFromText:(NSString *)text
                      font:(FontName)fontName
                  fontSize:(CGFloat)fontSize
                 imageSize:(CGSize)imageSize;

/**
 *  Create an image with a background color and with a text with a mask
 *
 *  @param imageSize       Image's size
 *  @param backgroundColor Image's background color
 *  @param string          Text to mask
 *  @param fontName        Text's font name
 *  @param fontSize        Text's font size
 *
 *  @return Returns the created UIImage
 */
+ (UIImage *)imageWithSize:(CGSize)imageSize
           backgroundColor:(UIColor *)backgroundColor
                maskedText:(NSString *)string
                      font:(FontName)fontName
                  fontSize:(CGFloat)fontSize;

+ (instancetype)resizableImageWithImage : (NSString *)image;


+ (UIImage *)resizeImage:(NSString *)imageName;

- (UIImage*)drn_boxblurImageWithBlur:(CGFloat)blur;


@end
