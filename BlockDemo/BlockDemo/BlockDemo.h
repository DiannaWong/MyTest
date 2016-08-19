//
//  BlockDemo.h
//  BlockDemo
//
//  Created by Dianna.Wong on 16/8/18.
//  Copyright © 2016年 DiannaWong. All rights reserved.
//

#import <Foundation/Foundation.h>

@class BlockDemo;

typedef void(^executeFinishedBlock)(void);
typedef void(^executeFinishedBlockParam)(BlockDemo *);


@interface BlockDemo : NSObject
{
    executeFinishedBlock finishblock;
    executeFinishedBlockParam finishblockparam;
}

@property (nonatomic,assign) NSInteger resultCode;
/**
 *  每次调用都产生一个新对象
 *
 *  @return
 */
+ (BlockDemo *)blockdemo;

/**
 *  不带参数的block
 *
 *  @param block
 */
- (void)setExecuteFinished:(executeFinishedBlock)block;

/**
 *  带参数的block
 *
 *  @param block
 */
- (void)setExecuteFinishedParam:(executeFinishedBlockParam)block;

- (void)executeTest;




@end
