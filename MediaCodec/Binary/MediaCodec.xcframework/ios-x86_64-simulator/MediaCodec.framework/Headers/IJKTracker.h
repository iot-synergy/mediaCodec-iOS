//
//  IJKTracker.h
//  IJKMediaPlayer
//
//  Created by huafeng on 2024/9/11.
//  Copyright © 2024 bilibili. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@protocol IJKTrackerProtocol <NSObject>

- (void)trackWithEventKey:(NSString *)eventKey param:(NSDictionary<NSString *, id> *)param;

@end


@interface IJKTracker : NSObject

@property (nonatomic, strong, nullable) id<IJKTrackerProtocol> tracker;

+ (instancetype)sharedInstance;

- (void)trackWithEventKey:(NSString *)eventKey param:(nullable NSDictionary<NSString *, id> *)param;


@end

NS_ASSUME_NONNULL_END
