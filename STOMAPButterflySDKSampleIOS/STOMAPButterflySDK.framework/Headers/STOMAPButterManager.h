//
//  STOMAPButterManager.h
//  STOMAPButterflySDK
//
//  Created by YASYUAN LINANG on 2019/3/6.
//  Copyright © 2019 YASYUAN LINANG. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef enum {
    STOMAPButterflySDKAliasTypeOTHER = 0,
    STOMAPButterflySDKAliasTypeEMAIL,
    STOMAPButterflySDKAliasTypePHONE,
    STOMAPButterflySDKAliasTypeFB_ID,
    STOMAPButterflySDKAliasTypeWEB_COOKIE
} STOMAPButterflySDKAliasType;
NS_ASSUME_NONNULL_BEGIN
@protocol STOMAPButterManagerDelegate <NSObject>
-(void)getResult:(NSString*)result;
-(void)getStatus:(NSString*)status;
-(void)getScanStatus:(NSString*)status;
-(void)getScanUUIDList:(NSArray*)uuidLists;
-(void)getScanFinalList:(NSArray*)finalLists;
-(void)getUpdateTime:(int)updateTime;
@end
@interface STOMAPButterManager : NSObject
@property (weak)id<STOMAPButterManagerDelegate> delegate;
+(instancetype)sharedManager;
-(void)startWithApiKey:(NSString*)apikey aliasKey:(NSString*)aliasKey aliasType:(STOMAPButterflySDKAliasType)type;
@end

@interface BeaconInfo:NSObject
@property (strong,nonatomic) NSString*rssi;
@property (strong,nonatomic) NSString*major;
@property (strong,nonatomic) NSString*minor;
@property (strong,nonatomic) NSString*uuid;
@end

NS_ASSUME_NONNULL_END
