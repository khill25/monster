//
// Created by Kaili Hill on 7/13/15.
// Copyright (c) 2015 Kaili Hill. All rights reserved.
//

#import <Foundation/Foundation.h>


@interface SFCompress : NSObject

+(void)compressDataStream:(NSData*)data saveAs:(NSString*)fileName;

@end