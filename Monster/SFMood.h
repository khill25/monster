//
// Created by Kaili Hill on 7/7/15.
// Copyright (c) 2015 Kaili Hill. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreGraphics/CoreGraphics.h>

@class SFMonster;


@interface SFMood : NSObject

// Current personality values
@property (nonatomic) CGFloat happiness;
@property (nonatomic) CGFloat sadness;
@property (nonatomic) CGFloat agitated;
@property (nonatomic) CGFloat awareness;
@property (nonatomic) CGFloat love;
@property (nonatomic) CGFloat bored;
@property (nonatomic) CGFloat confusion;
@property (nonatomic) CGFloat socialEnergy;

// floor and ceiling of personality values
@property (nonatomic) CGFloat happinessMax;
@property (nonatomic) CGFloat sadnessMax;
@property (nonatomic) CGFloat agitatedMax;
@property (nonatomic) CGFloat awarenessMax;
@property (nonatomic) CGFloat loveMax;
@property (nonatomic) CGFloat boredMax;
@property (nonatomic) CGFloat confusionMax;
@property (nonatomic) CGFloat socialEnergyMax;

@property (nonatomic) CGFloat happinessMin;
@property (nonatomic) CGFloat sadnessMin;
@property (nonatomic) CGFloat agitatedMin;
@property (nonatomic) CGFloat awarenessMin;
@property (nonatomic) CGFloat loveMin;
@property (nonatomic) CGFloat boredMin;
@property (nonatomic) CGFloat confusionMin;
@property (nonatomic) CGFloat socialEnergyMin;

-(NSString*)currentMoodString;
-(void)recalculateMoodForMonster:(SFMonster*)monster;

@end