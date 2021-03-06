//
//  SFMonster.h
//  Monster
//
//  Created by Kaili Hill on 7/7/15.
//  Copyright (c) 2015 Kaili Hill. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreGraphics/CoreGraphics.h>
#import "SFSimulatable.h"

@class SFPersonality;
@class SFMood;
@class SFFood;
@class SFAction;

@interface SFMonster : NSObject <SFSimulatable>

@property (nonatomic) NSString* objectId;
@property (nonatomic) NSString* ownerId;
@property (nonatomic) NSString* name;
@property (nonatomic) CGFloat age;
@property (nonatomic) NSInteger gender;
@property (nonatomic) double xp;
@property (nonatomic) CGFloat fatigue;

@property (nonatomic) SFPersonality* personality;
@property (nonatomic) NSArray* attributes;
@property (nonatomic) SFMood* mood;
@property (nonatomic) NSArray* friends;
@property (nonatomic) NSArray* favoriteFoods;

-(void)addFriend:(SFMonster*)toAdd;
-(void)removeFriend:(SFMonster*)toRemove;
-(void)feed:(SFFood*)food;

-(void)addBasicNeedAction:(SFAction*)action;

-(id)initWithBasicNeedActions:(NSArray*)basicNeedActions;

@end
