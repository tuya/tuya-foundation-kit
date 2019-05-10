//
//  NSData+TYConverter.h
//  TYFoundationKit
//
//  Created by TuyaInc on 2019/3/19.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface NSData (TYToString)

- (NSString *)ty_stringWithUTF8;
- (NSString *)ty_stringWithEncode:(NSStringEncoding)encode;

@end

@interface NSData (TYFromString)

+ (instancetype)ty_dataFromStringWithUTF8:(NSString *)str;
+ (instancetype)ty_dataFromString:(NSString *)str withEncode:(NSStringEncoding)encode;

@end

NS_ASSUME_NONNULL_END
