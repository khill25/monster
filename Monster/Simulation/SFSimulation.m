//
// Created by Kaili Hill on 7/7/15.
// Copyright (c) 2015 Kaili Hill. All rights reserved.
//

#import "SFSimulation.h"
#import "SFAction.h"

@interface SFSimulation()

// Basic motivations (goals)
@property (nonatomic) SFAction* eat;
@property (nonatomic) SFAction* sleep;
@property (nonatomic) SFAction* bathroom;
@property (nonatomic) SFAction* social;

@end

@implementation SFSimulation {

}

-(id)initWithSimulationSpeed:(double)fps monsters:(NSArray*)monsters {

    if (self = [super init]) {

    }

    return self;

}

-(void)step {



}

-(void)loop:(double)simulationTime {

}

-(void)simulate {

}

-(double)currentGameTime {

    return 0.0;
}

@end