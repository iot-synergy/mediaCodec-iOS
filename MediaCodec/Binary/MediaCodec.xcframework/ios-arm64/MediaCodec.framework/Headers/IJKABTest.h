//
//  IJKABTest.h
//  IJKMediaPlayer
//
//  Created by [YourName] on [Date].
//  Copyright © 2024 bilibili. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@protocol IJKABTestProtocol <NSObject>

- (nullable NSNumber *)getNumberWithFeatureId:(NSString *)featureId;

@end

@interface IJKABTest : NSObject

@property (nonatomic, strong, nullable) id<IJKABTestProtocol> abTest;

+ (instancetype)sharedInstance;

- (nullable NSNumber *)getNumberWithFeatureId:(NSString *)featureId;

@end

NS_ASSUME_NONNULL_END
