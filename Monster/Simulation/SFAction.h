//
// Created by Kaili Hill on 7/9/15.
// Copyright (c) 2015 Kaili Hill. All rights reserved.
//

#import <Foundation/Foundation.h>


@interface SFAction : NSObject

@property (nonatomic) NSString* objectId;
@property (nonatomic) NSString* name;
@property (nonatomic) NSString* extInfo;
// Arrays of consequences
@property (nonatomic) NSArray* incomingCosts;
@property (nonatomic) NSArray* outgoingCosts;
@property (nonatomic) NSArray* rewards;

@property (nonatomic) double maxTimeToComplete;
@property (nonatomic) double curentAverageTimeToComplete;
@property (nonatomic) double currentTime;
@property (nonatomic) double needThresholdUpperBound;
@property (nonatomic) double needThresholdLowerBound;
@property (nonatomic) double currentNeedValue;

/*
 * An action is surrounded by a cloud of several clumps of consequences.
 * Incoming consequence costs (cost of starting a new task)
 * Outgoing consequence costs (cost of ending the one you are on if not 'finished')
 * Completion consequence costs (reward/motivator)
 *
 * Determination of moving from one node to another is made by evaluating the risk/reward of a switch
 * If a creature is hungry for example it will learn that it must drop tasks to find food
 * or it will hurt or die. This can be learned. It can then attach then watch certain attributes
 * as it determines when to switch and calculate a global cost. There is a hierarchy of needs.
 * This would apply to things like sleep to, that would globally affect the weights of various edges
 * to a point that it only made sense to go to sleep as it's edge from any other task would be lowest.
 *
 * There is also the chance that leaving a task will always apply the outgoing costs as well as the rewards.
 * But in general outgoing costs should provide some positive net effect for leaving the node
 * such as hunger, sleep or being finished
 *
 * Global edge modifier - e.g. hunger, sleep, bathroom...
 * Local edge modifier - e.g. social time makes me happier(reward) but if I leave my homework to play I'll be punished(consequence)
 *
 */

// Reward/motivator
// Negative outcome for failure? To weigh risk vs reward
// Outcome?

-(void)finishAction;
-(double)outgoingCostCalculation;
-(double)incomingCostCalculation;
-(double)rewardsCalculation;

-(double)percevedValue;

@end