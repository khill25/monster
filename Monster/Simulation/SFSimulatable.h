//
// Created by Kaili Hill on 7/9/15.
// Copyright (c) 2015 Kaili Hill. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol SFSimulatable <NSObject>

// Returns the used time for the step
-(double)step:(double)currentSimTime stepLength:(double)stepLength maxRuntime:(double)maxRuntime;

@end