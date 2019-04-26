//
//  ViewController.m
//  STOMAPButterflySDKSampleIOS
//
//  Created by YASYUAN LINANG on 2019/3/6.
//  Copyright © 2019 YASYUAN LINANG. All rights reserved.
//

#import "ViewController.h"
#import <STOMAPButterflySDK/STOMAPButterflySDK.h>

@interface ViewController ()<STOMAPButterManagerDelegate,UITableViewDelegate,UITableViewDataSource>

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    
    // initial and start SDK
    [STOMAPButterManager sharedManager].delegate = self;
    [[STOMAPButterManager sharedManager] startWithApiKey:@"YourAPIKey" aliasKey:@"+886987654321"  aliasType:STOMAPButterflySDKAliasTypePHONE];
}

@end
