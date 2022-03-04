//
//  SparkGCDTimer.h
//  Spark
//
//  Created by GRX on 2022/2/24.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface SparkGCDTimer : NSObject
+ (NSString*)timerTask:(void(^)(void))task
            start:(NSTimeInterval) start
         interval:(NSTimeInterval) interval
          repeats:(BOOL) repeats
             async:(BOOL)async;

+(void)canelTimer:(NSString*) timerName;
@end

NS_ASSUME_NONNULL_END
