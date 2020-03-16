//
//  RCMediaCaptureView.h
//  PhotoAndVIdeo
//
//  Created by Roy on 2017/3/3.
//  Copyright © 2017年 Roy CHANG. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "RCMediaToolbar.h"
#import "RCMediaPreview.h"
#import <AVFoundation/AVFoundation.h>
@class RCMediaCaptureView;
#ifdef NSFoundationVersionNumber_iOS_7_1
#define RC_iOS_7_Max    NSFoundationVersionNumber_iOS_7_1
#else
#define RC_iOS_7_Max    1047.25
#endif

@protocol RCMediaCaptureViewDelegate <NSObject>

- (void)rc_captureView:(RCMediaCaptureView *)capture didFinishPickingMediaWithInfo:(NSDictionary *)info;

- (void)rc_captureViewDidCancel:(RCMediaCaptureView *)capture;

@end
typedef void(^PaseImageBlock)(UIImage *imgData);
NS_AVAILABLE_IOS(7_0)
@interface RCMediaCaptureView : UIView

@property (nonatomic, weak) id<RCMediaCaptureViewDelegate> captureDelegate;

///‘焦距’参数（拍照管用，最大10）
@property (nonatomic, assign) CGFloat maxScaleAndCropFactor;

@property (nonatomic, copy) PaseImageBlock paseImageBlock;
@property (nonatomic, copy) NSString *videoP;
@property (nonatomic, strong) AVCaptureVideoPreviewLayer *captureLayer;
@property (nonatomic, strong) UIImageView *showImgView;
@property (nonatomic, strong) RCMediaToolbar *toolbar;
@property (nonatomic, strong) RCMediaPreview *preview;

-(void)paseImageBlock:(PaseImageBlock)block;



- (void)rc_startCapture;

- (void)rc_stopCaptture;
-(void)testRC;
@end
