//
//  BinanceAddress.h
//  BlockchainKeys
//
//  Created by Yuzhiyou on 2019/4/30.
//  Copyright © 2019 Yuzhiyou. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface BinanceAddress : NSObject
@property (nonatomic, readonly) NSString *address;
@property (nonatomic, readonly) NSData *publicKeyData;

/**
 * @brief Initialization method
 */
- (instancetype)initWithData:(NSData *)publicKeyData;
/**
 * decodeAddress
 */
+ (NSString *)decodeAddress:(NSString *)address;
/**
 Valid Address

 @return YES/NO
 */
+(BOOL)validAddress:(NSString *)address;
@end
