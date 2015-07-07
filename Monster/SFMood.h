//
// Created by Kaili Hill on 7/7/15.
// Copyright (c) 2015 Kaili Hill. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreGraphics/CoreGraphics.h>

@class SFMonster;


@interface SFMood : NSObject

@property (nonatomic) CGFloat happiness;
@property (nonatomic) CGFloat sadness;
@property (nonatomic) CGFloat agitated;
@property (nonatomic) CGFloat awareness;
@property (nonatomic) CGFloat love;
@property (nonatomic) CGFloat bored;
@property (nonatomic) CGFloat confusion;
@property (nonatomic) CGFloat socialEnergy;

-(NSString*)currentMoodString;
-(void)recalculateMoodForMonster:(SFMonster*)monster;

@end