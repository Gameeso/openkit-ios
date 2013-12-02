//
//  OKLeaderboardsViewController.h
//  OKClient
//
//  Created by Suneet Shah on 1/10/13.
//  Copyright (c) 2013 OpenKit. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "OKDefines.h"

// Do not use these directly, as the implementation may change.  Instead,
// Set a delegate on OKManager and follow the OKManagerDelegate protocol.
// See OKManager.h for more.
#define OKLeaderboardsViewWillAppear    @"OKLeaderboardsViewWillAppear"
#define OKLeaderboardsViewDidAppear     @"OKLeaderboardsViewDidAppear"
#define OKLeaderboardsViewWillDisappear @"OKLeaderboardsViewWillDisappear"
#define OKLeaderboardsViewDidDisappear  @"OKLeaderboardsViewDidDisappear"



@interface OKViewController : UIViewController
@property(nonatomic, strong) OKBlock okBlock;
@property(nonatomic, weak) UIViewController *okparent;
@end


@interface OKBaseViewController : UINavigationController

// Set this property to true to force Leaderboards view to Landscape only (both left and right)
// Set to false to support portrait & landscape
@property(nonatomic) BOOL showLandscapeOnly;

@end
