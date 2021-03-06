//
//  UIColor+themeColor.m
//  AppKitLibrary
//
//  Created by jinwei on 15/10/23.
//  Copyright © 2015年 jinwei group. All rights reserved.
//

#import "UIColor+themeColor.h"

@implementation UIColor (themeColor)


+ (UIColor *)JWColorWithHex:(int)hexValue alpha:(CGFloat)alpha
{
    return [UIColor colorWithRed:((float)((hexValue & 0xFF0000) >> 16))/255.0
                           green:((float)((hexValue & 0xFF00) >> 8))/255.0
                            blue:((float)(hexValue & 0xFF))/255.0
                           alpha:alpha];
}

+ (UIColor *)JWColorWithHex:(int)hexValue
{
    return [UIColor JWColorWithHex:hexValue alpha:1.0];
}


#pragma mark - theme colors

+ (UIColor *)JWthemeColor
{
    if (JWNightModel) {
        return [UIColor colorWithRed:0.17 green:0.17 blue:0.17 alpha:1.0];
    }
    return [UIColor colorWithRed:235.0/255 green:235.0/255 blue:243.0/255 alpha:1.0];
}

+ (UIColor *)JWnameColor
{
    if (JWNightModel) {
        return [UIColor colorWithRed:37.0/255 green:147.0/255 blue:58.0/255 alpha:1.0];
    }
    return [UIColor JWColorWithHex:0x087221];
}

+ (UIColor *)JWtitleColor
{
    if (JWNightModel) {
        return [UIColor colorWithRed:0.8 green:0.8 blue:0.8 alpha:1.0];
    }
    return [UIColor blackColor];
}

+ (UIColor *)JWseparatorColor
{
    if (JWNightModel) {
        return [UIColor colorWithRed:0.234 green:0.234 blue:0.234 alpha:1.0];
    }
    return [UIColor colorWithRed:217.0/255 green:217.0/255 blue:223.0/255 alpha:1.0];
}

+ (UIColor *)JWcellsColor
{
    if (JWNightModel) {
        return [UIColor colorWithRed:0.17 green:0.17 blue:0.17 alpha:1.0];
    }
    return [UIColor whiteColor];
}

+ (UIColor *)JWtitleBarColor
{
    if (JWNightModel) {
        return  [UIColor colorWithRed:0.2 green:0.2 blue:0.2 alpha:1.0];
    }
    return [UIColor JWColorWithHex:0xE1E1E1];
}

+ (UIColor *)JWcontentTextColor
{
    if (JWNightModel) {
        return  [UIColor colorWithRed:0.8 green:0.8 blue:0.8 alpha:1.0];
    }
    return [UIColor JWColorWithHex:0x272727];
}


+ (UIColor *)JWselectTitleBarColor
{
    
    if (JWNightModel) {
        return  [UIColor colorWithRed:0.067 green:0.282 blue:0.094 alpha:1.0];
    }
    return [UIColor JWColorWithHex:0xE1E1E1];
}

+ (UIColor *)JWnavigationbarColor
{
    if (JWNightModel) {
        return [UIColor colorWithRed:0.067 green:0.282 blue:0.094 alpha:1.0];
    }
    return [UIColor JWColorWithHex:0x15A230];//0x009000
}

+ (UIColor *)JWselectCellSColor
{
    if (JWNightModel) {
        return [UIColor colorWithRed:23.0/255 green:23.0/255 blue:23.0/255 alpha:1.0];
    }
    return [UIColor colorWithRed:203.0/255 green:203.0/255 blue:203.0/255 alpha:1.0];
}

+ (UIColor *)JWlabelTextColor
{
    if (JWNightModel) {
        return [UIColor colorWithRed:74.0/255 green:74.0/255 blue:74.0/255 alpha:1.0];
    }
    return [UIColor whiteColor];
}

+ (UIColor *)JWteamButtonColor
{
    if (JWNightModel) {
        return [UIColor colorWithRed:0.2 green:0.2 blue:0.2 alpha:1.0];
    }
    return [UIColor colorWithRed:251.0/255 green:251.0/255 blue:253.0/255 alpha:1.0];
}

+ (UIColor *)JWinfosBackViewColor
{
    if (JWNightModel) {
        return [UIColor colorWithRed:24.0/255 green:24.0/255 blue:24.0/255 alpha:0.6];
    }
    return [UIColor clearColor];
}

+ (UIColor *)JWlineColor
{
    if (JWNightModel) {
        return [UIColor colorWithRed:18.0/255 green:144.0/255 blue:105.0/255 alpha:0.6];
    }
    return [UIColor JWColorWithHex:0x2bc157];
}

+ (UIColor *)JWborderColor
{
    if (JWNightModel) {
        return [UIColor colorWithRed:18.0/255 green:144.0/255 blue:105.0/255 alpha:0.6];
    }
    return [UIColor lightGrayColor];
}

+ (UIColor *)JWrefreshControlColor
{
    if (JWNightModel) {
        return [UIColor JWColorWithHex:0x13502A];
    }
    return [UIColor JWColorWithHex:0x21B04B];
}


@end
