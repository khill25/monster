//
// Created by Kaili Hill on 7/13/15.
// Copyright (c) 2015 Kaili Hill. All rights reserved.
//

#import "SFCompress.h"


@implementation SFCompress {

}

+(void)compressDataStream:(NSData*)data saveAs:(NSString*)fileName {

    NSMutableDictionary* map = [[NSMutableDictionary alloc] init];
    NSUInteger length = data.length;
    NSUInteger wordLength = sizeof(UInt32);

    for (NSUInteger chunk = 0; chunk < length; chunk+=wordLength) {
        UInt32* bytes = (UInt32*)malloc(wordLength);
        if (chunk + wordLength > length) {
            wordLength = length-chunk;
            if (wordLength == 0) break;
        }
        [data getBytes:bytes range:NSMakeRange(chunk, wordLength)];

        NSString* key = [NSString stringWithFormat:@"%p", bytes];

        if (map[key]) {
            NSLog(@"%@", map[key]);
            map[key] = @([map[key] intValue] + 1);
        } else {
            [map setValue:@(1) forKey:key];
        }

    }

    //algorithm
    // find patterns
    // find longest recurring pattern
    // use longest recurring pattern as dictionary entry and chunk location
    // variable length chunks?



    NSString* output = @"";
    for(NSString* key in [map allKeys]) {

        NSScanner *scanner = [NSScanner scannerWithString:key];
        unsigned long long int value;
        [scanner setScanLocation:2];
        [scanner scanHexLongLong:&value];
        NSString* decoded = [[NSString alloc] initWithBytes:&value length:8 encoding:NSUTF8StringEncoding];
        //NSString* decoded = [NSString stringWithFormat:@"%C", &value];
        BOOL breaking = YES;

    }


    //NSString* output = [NSString stringWithUTF8String:[data bytes]];


    BOOL breakpoint = NO;
}

@end