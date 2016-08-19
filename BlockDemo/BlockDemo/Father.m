//
//  Father.m
//  BlockDemo
//
//  Created by Dianna.Wong on 16/8/18.
//  Copyright © 2016年 DiannaWong. All rights reserved.
//

#import "Father.h"

@interface Father ()
@property (nonatomic, copy) NSString *name;
@end

@implementation Father

- (NSString *)description
{
    return [NSString stringWithFormat:@"name:%@",_name];
}


@end
