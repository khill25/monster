//
// Created by Kaili Hill on 7/7/15.
// Copyright (c) 2015 Kaili Hill. All rights reserved.
//

#import "SFSimulation.h"
#import "SFAction.h"
#import "SFMonster.h"

@interface SFSimulation()

@property (nonatomic) double simtime;

@end

@implementation SFSimulation {

}

-(id)initWithSimulationSpeed:(double)fps monsters:(NSArray*)monsters {

    if (self = [super init]) {

        self.simSpeed = fps;
        self.monsters = [NSArray arrayWithArray:monsters];

    }

    return self;

}

-(void)step {

    // Any chance of a random events would happen here
    // every x time steps??

    // Max time slice here for path algorithm....
    for(SFMonster* monster in self.monsters) {
        dispatch_async(dispatch_get_global_queue(DISPATCH_QUEUE_PRIORITY_HIGH, 0), ^{
            [monster step:self.simtime stepLength:self.simSpeed maxRuntime:self.simSpeed];
        });
    }

    // Step is done, increment!
    self.simtime = self.simtime + self.simSpeed;
}

-(void)loop:(double)simulationTime {

}

-(void)simulate {

}

-(double)currentSimulationTime {

    return self.simtime;
}

@end