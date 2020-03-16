//
//  RCMediaViewController.h
//  PhotoAndVIdeo
//
//  Created by Roy on 2017/2/28.
//  Copyright © 2017年 Roy CHANG. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Masonry.h"
#import "RCMediaCaptureView.h"
@class RCMediaViewController;

@class PhotoAndVideo;
///image instance
FOUNDATION_EXTERN NSString *const RCMediaImageInfo;
///NSURL instance
FOUNDATION_EXTERN NSString *const RCMediaVideoInfo;


@protocol RCMediaViewControllerDelegate <NSObject>

- (void)rc_mediaController:(RCMediaViewController *)media didFinishPickingMediaWithInfo:(NSDictionary *)info;

- (void)rc_mediaControlelrDidCancel:(RCMediaViewController *)media;

@end

@interface RCMediaViewController : UIViewController

@property (nonatomic, weak) id<RCMediaViewControllerDelegate> mediaDelegate;
@property (nonatomic, strong) RCMediaCaptureView *captureView;
@property (strong, nonatomic) PhotoAndVideo* plugin;
@property (nonatomic, strong) NSString *actiStr;
@end
