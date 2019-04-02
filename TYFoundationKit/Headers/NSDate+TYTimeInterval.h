//
//  NSDate+TYTimeInterval.h
//  TYFoundationKit
//
//  Created by TuyaInc on 2019/3/2.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN


/**
 current time interval since 1970 in second
 */
extern NSTimeInterval TY_TimestampSEC(void);
/**
 current time interval since 1970 in millisecond
 */
extern NSTimeInterval TY_TimestampMSEC(void);

/**
 current time interval since specific date
 if sinceDate is nil, return time interval since 1970
 if millisecond is YES, return time interval in millisecond
 */
extern NSTimeInterval TY_TimeInterval(NSDate * _Nullable sinceDate, BOOL millisecond);



@interface NSDate (TYTimeInterval)

/**
 current time interval since specific date, in second
 if sinceDate is nil, return time interval since 1970
 */
+ (NSTimeInterval)ty_timeIntervalSEC:(NSDate * _Nullable)sinceDate;
/**
 current time interval since specific date, in millisecond
 if sinceDate is nil, return time interval since 1970
 */
+ (NSTimeInterval)ty_timeIntervalMSEC:(NSDate * _Nullable)sinceDate;


@end

NS_ASSUME_NONNULL_END
