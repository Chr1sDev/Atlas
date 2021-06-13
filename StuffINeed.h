// Yes this is called StuffINeed.h

#import <Cephei/HBPreferences.h>

HBPreferences *preferences;
BOOL enabled;
BOOL gestureEnabled;
BOOL animEnabled;

NSInteger buttonOneStyle = 2;
NSInteger buttonTwoStyle = 1;
NSInteger buttonThreeStyle = 3;

#import "UIView+Constraints.h"
#import <AVFoundation/AVFoundation.h>

@interface AVButton : UIButton
@property(nonatomic, retain) UIVisualEffectView *backgroundEffectView;
@end

@interface AVView : UIView
@end

@interface AVLabel : UIView
@property(nonatomic, readonly) UILabel *label;
@end

@interface AVScrubber : UISlider
@end

@interface AVLayoutView : AVView
@end

@interface AVCABackdropLayerView : UIView
@end

@interface AVTouchIgnoringView : UIView
@end

@interface AVRoutePickerView : UIView
- (void)_routePickerButtonTapped:(id)arg1;
@end

@interface AVPlaybackControlsRoutePickerView : AVRoutePickerView
@end

// BOOL showing;

@interface AVTransportControlsView : UIView
@property(assign, nonatomic) AVButton *standardPlayPauseButton;
@property(nonatomic, readonly) AVScrubber *scrubber;
@property(nonatomic, readonly) AVLabel *elapsedTimeLabel;
@property(nonatomic, readonly) AVLabel *timeRemainingLabel;
@property(nonatomic, readonly) AVLabel *liveBroadcastLabel;
@property(assign, nonatomic) BOOL showsLiveStreamingControls;
@property(assign, nonatomic) BOOL liveStreamingControlsIncludeScrubber;

@property(nonatomic, retain) AVButton *anchorCenterItem;
@property(nonatomic, retain) AVButton *rewindButton;
@property(nonatomic, retain) AVButton *fastforwardButton;
@property(nonatomic, retain) AVButton *closeButton;
@property(nonatomic, retain) UIView *darkOverlay;

@property(nonatomic, retain) AVButton *pipButton;
@property(nonatomic, retain) AVButton *gravityButton;
@property(nonatomic, retain) AVButton *airplayButton;
@property(nonatomic, retain) AVButton *orientationButton;

@property(nonatomic, retain) AVButton *pipButton2;
@property(nonatomic, retain) AVButton *gravityButton2;
@property(nonatomic, retain) AVButton *airplayButton2;
@property(nonatomic, retain) AVButton *orientationButton2;

@property(nonatomic, retain) AVButton *pipButton3;
@property(nonatomic, retain) AVButton *gravityButton3;
@property(nonatomic, retain) AVButton *airplayButton3;
@property(nonatomic, retain) AVButton *orientationButton3;

@property (nonatomic, retain) UIView *numberView;
@property (nonatomic, retain) UILabel *leftNumber;
@property (nonatomic, retain) UILabel *rightNumber;

- (id)initWithFrame:(CGRect)arg1 styleSheet:(id)arg2;
- (void)_layoutDoubleRowViews;
- (void)_layoutSingleRowViews;
- (void)dealloc;

// %new
- (void)hideScrubberAndLabels;
- (void)showScrubberAndLabels;
- (void)playButtonPressed;
- (void)closeButtonPressed;
- (void)rewindButtonPressed;
- (void)fastforwardButtonPressed;
- (void)pipButtonPressed;
- (void)gravityButtonPressed;
- (void)airplayButtonPressed;
- (void)orientationButtonPressed:(UIButton *)sender;

-(void)leftGesture;
-(void)rightGesture;
@end

@interface AVPlaybackControlsView : UIView
// new properties
@property(nonatomic, retain) UIBlurEffect *blurEffect;
@property(nonatomic, retain) UIVisualEffectView *blurEffectView;
- (id)initWithFrame:(CGRect)arg1 styleSheet:(id)arg2;
- (void)setFullScreen:(BOOL)arg1;
@end

@interface AVPlayerViewController : UIViewController
// @property (nonatomic,retain) AVPlayerController * playerController;
- (id)initWithPlayerLayerView:(id)arg1;
- (void)togglePlayback:(id)arg1;
- (void)doneButtonTapped:(id)arg1;
- (void)_handleSkipBack15SecondsKeyCommand:(id)arg1;
- (void)_handleSkipAhead15SecondsKeyCommand:(id)arg1;
- (void)pictureInPictureButtonTapped:(id)arg1;
- (void)videoGravityButtonTapped:(id)arg1;
- (void)_handleSingleTapGesture:(id)arg1;
- (void)_handleDoubleTapGesture:(id)arg1;
- (void)dealloc;
@end

// Orientation Lock
@interface SBOrientationLockManager
+(instancetype)sharedInstance;
-(id)description;
-(BOOL)isUserLocked;
-(void)lock;
-(void)unlock;
@end