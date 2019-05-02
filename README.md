STOMAP Butterfly Service iOS SDK Sample
===================================
This repo contains a sample of iOS Project which demonstrates how to use STOMAP Butterfly Service

Pre-requisites
--------------
1. A valid API key from STOMAP team
2. A set of locations confirmed by STOMAP team

Getting Started
---------------
1. Import `STOMAPButterflySDK.framework` into your APP project

2. Add the following service setup to `info.plist` file
```
Privacy - Location Always and When In Use Usage Description
Privacy - Location When In Use Usage Description
Privacy - Location Always Usage Description
```

3. Add `#import <STOMAPButterflySDK/STOMAPButterflySDK.h>` into your ViewController.m

4. Include the following code in `viewDidLoad()` in your ViewController to initialize the SDK
```
[[STOMAPButterManager sharedManager] startWithApiKey:@"APIKey" aliasKey:@"test@test.com" aliasType:STOMAPButterflySDKAliasTypeEMAIL]
```

5. Setup your mobile user alias key and type. Possible types are listed as following:
```
STOMAPButterflySDKAliasTypeOTHER
STOMAPButterflySDKAliasTypeEMAIL
STOMAPButterflySDKAliasTypePHONE
STOMAPButterflySDKAliasTypeFB_ID
STOMAPButterflySDKAliasTypeWEB_COOKIE
```

License
-------
Copyright 2018 Spatial Topology Technology Co., Ltd.

Contact
-------
For sales, please contact
<sales@spatial-topology.com>

For other problems, please contact
<service@spatial-topology.com>

Last Update: April 08, 2019
