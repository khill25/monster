//
// Created by Kaili Hill on 7/9/15.
// Copyright (c) 2015 Kaili Hill. All rights reserved.
//
// This represents something like hunger
// needing to go to the bathroom
// some kind of goal/action that changes and has consequences for
// min values like death if you don't eat long enough
//

#import <Foundation/Foundation.h>

@interface SFAttribute : NSObject

@property (nonatomic) NSString* objectId;
@property (nonatomic) NSString* name;

@property (nonatomic) double minValue;
@property (nonatomic) double currentValue;
@property (nonatomic) double maxValue;

@property (nonatomic) NSArray* minValueConsequences;
@property (nonatomic) NSArray* maxValueConsequences;

@end