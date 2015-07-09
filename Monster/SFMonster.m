//
//  SFMonster.m
//  Monster
//
//  Created by Kaili Hill on 7/7/15.
//  Copyright (c) 2015 Kaili Hill. All rights reserved.
//

#import "SFMonster.h"
#import "SFMood.h"
#import "SFFood.h"

@implementation SFMonster

-(void)simulate {

    // Play -> happiness
    // Hygiene -> happiness/sadness
    // Food -> hunger/happiness

    /*
     * What affects mental state?
     * Food, living conditions, personality
     * Social life, love life, needs, wants
     * Safety
     */

    /*
     * if hunger <= 10% seek food now
     * if hunger <= 25% hungry, unwillingness to seek community or play, grumpy
     * if 10% < hunger <= 95% snacks are welcome, content :)
     * if happiness <= 50 and hunger > 25 seek community, play time
     * if happiness > 50 and hunger > 25 play time, content :), self learning
     * if happiness > 80 and hunger > 50 content, make goals, practice
     */

}

@end
