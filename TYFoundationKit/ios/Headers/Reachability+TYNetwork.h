//
//  Reachability+TYNetwork.h
//  TYFoundationKit
//
//  Created by TuyaInc on 2019/5/15.
//

#if TARGET_OS_IOS

#import "Reachability.h"

NS_ASSUME_NONNULL_BEGIN


typedef enum : NSUInteger {
    TYNetworkStatusUnknown = 0,
    TYNetworkStatusUnreachable,
    TYNetworkStatusWWAN2G,
    TYNetworkStatusWWAN3G,
    TYNetworkStatusWWAN4G,
    TYNetworkStatusWiFi = 100,
} TYNetworkStatus;

FOUNDATION_EXTERN TYNetworkStatus TY_NetworkStatus(void);
FOUNDATION_EXTERN BOOL TY_NetworkReachable(void);

@interface Reachability (TYNetwork)

- (TYNetworkStatus)ty_networkStatus;

@end

NS_ASSUME_NONNULL_END

#endif
