//
//  TYLanguageLoader.h
//  TYFoundationKit
//
//  Created by TuyaInc on 2019/12/9.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@protocol TYLanguageLoaderDelegate <NSObject>

/// 在获取多语言前的回调方法，如果该回调返回了非nil值，则localizedString方法会返回这个值。
/// 可以用这个方法运行时修改工程多语言
/// @param languageKey 多语言key
- (NSString *)beforeLocalizedWithKey:(NSString *)languageKey;

/// 在获取多语言后的回调方法，如果该回调返回了非nil值，则localizedString方法会返回这个值。
/// 可以用这个方法运行时修改工程多语言，如果对翻译的内容不满意可以做替换等等
/// @param languageKey 多语言key
/// @param isFound 是否找到了多语言翻译
/// @param localizedString 多语言翻译的内容，如果isFound为NO，则localizedString==languageKey
- (NSString *)afterLocalizedWithKey:(NSString *)languageKey
                            isFound:(BOOL)isFound
                    localizedString:(NSString *)localizedString;
@end


@interface TYLanguageLoader : NSObject

@property (nonatomic, weak) id<TYLanguageLoaderDelegate> delegate;

+ (instancetype)sharedInstance;


/// 注册一个bundle和兜底语言，多语言会从设置的bundle里取，默认[NSBundle mainBundle]和@"en";
/// @param bundle 自定义取多语言的bundle
/// @param defaultLangugae 默认语种，如果其他语种取不到时会用默认语种进行补全，比如@"en".
///                        如果该参数为nil，则默认用@"en"
- (void)registerLocalizedBundle:(NSBundle *)bundle defaultLangugae:(NSString *)defaultLangugae;


/// 在register bundle中是否能找到keys对应的多语言
/// @param languageKey 多语言key
- (BOOL)isExistLocalized:(NSString *)languageKey;


/// 获取key值对应的多语言
/// @param languageKey 多语言key
- (NSString *)localizedString:(NSString *)languageKey;
@end

NS_ASSUME_NONNULL_END
