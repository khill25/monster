//
// Created by Kaili Hill on 7/7/15.
// Copyright (c) 2015 Kaili Hill. All rights reserved.
//

#import <Foundation/Foundation.h>


@interface SFSimulation : NSObject

@property (nonatomic) NSArray* monsters;
@property (nonatomic) double simSpeed;

-(id)initWithSimulationSpeed:(double)fps monsters:(NSArray*)monsters;

-(void)step;
-(void)loop:(double)simulationTime;
-(void)simulate;
-(double)currentGameTime;

@end