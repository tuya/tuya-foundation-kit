//
//  NSArray+TYSafe.h
//  TYFoundationKit
//
//  Created by TuyaInc on 2018/12/17.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface NSArray (TYSafe)

- (id)ty_safeObjectAtIndex:(NSUInteger)index;

@end

NS_ASSUME_NONNULL_END
