//
//  TYFoundationKit.h
//  TYFoundationKit
//
//  Created by TuyaInc on 2018/12/24.
//

#ifndef TYFoundationKit_h
#define TYFoundationKit_h

#import "NSArray+TYCategory.h"
#import "NSDate+TYCategory.h"
#import "NSURL+TYCategory.h"
#import "NSString+TYCategory.h"

// KV Storage Tool
#if __has_include(<TYStorageLibrary/TYSLKVOperator.h>)
#import <TYStorageLibrary/TYSLKVOperator.h>
#elif __has_include("TYSLKVOperator.h")
#import "TYSLKVOperator.h"
#endif

#endif /* TYFoundationKit_h */
