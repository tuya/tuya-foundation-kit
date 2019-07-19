//
//  NSObject+TYAssociate.h
//  TYFoundationKit
//
//  Created by TuyaInc on 2019/3/26.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface NSObject (TYAssociate)

- (void)ty_setAssociate:(id)value withKey:(void *)key;
- (void)ty_setAssociate:(id)value withStringKey:(NSString *)keyStr;

- (void)ty_setWeakAssociate:(id)value withKey:(void *)key;
- (void)ty_setWeakAssociate:(id)value withStringKey:(void *)keyStr;

- (id)ty_getAssociateWithKey:(void *)key;
- (id)ty_getAssociateWithStringKey:(NSString *)keyStr;

- (void)ty_removeAllAssociate;

@end

NS_ASSUME_NONNULL_END
