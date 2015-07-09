//
// Created by Kaili Hill on 7/9/15.
// Copyright (c) 2015 Kaili Hill. All rights reserved.
//

#import <Foundation/Foundation.h>

@class SFAction;


@interface SFConsequence : NSObject

@property (nonatomic) NSString* objectId;
@property (nonatomic) NSString* name;
@property (nonatomic) NSString* extInfo;

@property (nonatomic) double weight; // cost/weight, same thing, weight just sounds more neutral, used to keep the original number
@property (nonatomic) double transformWeight; // used when something changes in a temporary fashion
@property (nonatomic) NSArray* associatedActions; // Actions that this consequence is around

// Associate an action with this consequence. If this was a good thing, then it was positive
-(void)associateWithAction:(SFAction*)action positive:(BOOL)positiveAssociation assignedWeight:(double)weight;
-(void)changeAssociation:(BOOL)positiveAssociation forAction:(SFAction*)action;
-(void)changeWeight:(double)weight forAction:(SFAction*)action;
-(void)removeAssociationForAction:(SFAction*)action;

@end