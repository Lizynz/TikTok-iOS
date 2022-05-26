//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#pragma mark -

//
// File: MuseDiscoverFramework
// UUID: EBA0B709-8432-3A82-B219-4981E5486992
//
//                           Arch: arm64
//                Current version: 1.0.0
//          Compatibility version: 1.0.0
//                 Source version: 0.0.0.0.0
//            Minimum iOS version: 10.0.0
//                    SDK version: 15.0.0
//
// Objective-C Garbage Collection: Unsupported
//
//                       Run path: @executable_path/Frameworks
//                               = /Frameworks
//

@protocol ATSComplianceService
@end

@protocol AWEAdTracker
@end

@protocol AWEAppDarkForestSettingManager
@end

@protocol AWEAppDiscoverSettingManagerProtocol
@end

@protocol AWECrotocol
@end

@protocol AWEDetailCollectionModuleService
@end

@protocol AWEDiscoverABTestRegisterProtocol
@end

@protocol AWEDiscoverBannerVCProtocol
@end

@protocol AWEDiscoverBundleService
@end

@protocol AWEDiscoverCellTopViewDelegate
@end

@protocol AWEDiscoverConfigProtocol <NSObject>
@end

@protocol AWEDiscoverManagerProtocol
@end

@protocol AWEDiscoverViewControllerProtocol
@end

@protocol AWEEpidBannerViewProtocol
@end

@protocol AWEExternalRouterModuleService
@end

@protocol AWEFTCChildModelModuleService
@end

@protocol AWEFeedModuleService
@end

@protocol AWEHashTag2EmojiService
@end

@protocol AWEIsTabAwaring
@end

@protocol AWELiveModuleService
@end

@protocol AWEMediaDownloader
@end

@protocol AWEMediaDownloaderBanner
@end

@protocol AWEMediaDownloaderCore
@end

@protocol AWEMediaDownloaderLegacy
@end

@protocol AWEMediaDownloaderMusic
@end

@protocol AWEPreviewable
@end

@protocol AWEReferenceTrackable
@end

@protocol AWESearchBarPlaceholderDelegate
@end

@protocol AWESearchBundleService
@end

@protocol AWESearchMiddleProtocol
@end

@protocol AWESlidingViewControllerDelegate
@end

@protocol AWEStudioAlbumExternalService
@end

@protocol AWEStudioCapabilities
@end

@protocol AWEStudioChallengeExternalService
@end

@protocol AWEStudioClipExternalService
@end

@protocol AWEStudioCreatorPreviewExternalService
@end

@protocol AWEStudioDraftExternalService
@end

@protocol AWEStudioDuetExternalService
@end

@protocol AWEStudioECLibraryExternalService
@end

@protocol AWEStudioEditExternalService
@end

@protocol AWEStudioJSBridgeExternalService
@end

@protocol AWEStudioMVExternalService
@end

@protocol AWEStudioModuleService
@end

@protocol AWEStudioMusicExternalService
@end

@protocol AWEStudioPublishExternalService
@end

@protocol AWEStudioPushExternalService
@end

@protocol AWEStudioRecordExternalService
@end

@protocol AWEStudioRouterExternalService
@end

@protocol AWEStudioStickerExternalService
@end

@protocol AWEStudioStitchExternalService
@end

@protocol AWEStudioTaskExternalService
@end

@protocol AWEUserCenterModuleService
@end

@protocol AWEUserMessage
@end

@protocol AWEUserProfileModuleService
@end

@protocol AWEUserRecommendModuleService
@end

@protocol AWEZoomTransitionOuterContextProvider
@end

@protocol BCAABundleActivator
@end

@protocol BCAABundleService
@end

@protocol BCAAInstanceService
@end

@protocol CMCDiscoverScene
@end

@protocol CMCScene
@end

@protocol HTSService
@end

@protocol HTSServiceUnavailable
@end

@protocol MTLJSONSerializing
@end

@protocol MTLModel
@end

@protocol NSCopying
- (id)copyWithZone:(struct _NSZone *)arg1;
@end

@protocol NSObject
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;
@property(readonly) unsigned long long hash;
- (struct _NSZone *)zone;
- (unsigned long long)retainCount;
- (id)autorelease;
- (oneway void)release;
- (id)retain;
- (_Bool)respondsToSelector:(SEL)arg1;
- (_Bool)conformsToProtocol:(Protocol *)arg1;
- (_Bool)isMemberOfClass:(Class)arg1;
- (_Bool)isKindOfClass:(Class)arg1;
- (_Bool)isProxy;
- (id)performSelector:(SEL)arg1 withObject:(id)arg2 withObject:(id)arg3;
- (id)performSelector:(SEL)arg1 withObject:(id)arg2;
- (id)performSelector:(SEL)arg1;
- (id)self;
- (Class)class;
- (_Bool)isEqual:(id)arg1;

@optional
@property(readonly, copy) NSString *debugDescription;
@end

@protocol TIKTOKDiscoverTrendableViewControllerProtocol
@end

@protocol TTKChallengeAdTagView
@end

@protocol TTKStudioGreenScreenKitExternalService
@end

@protocol TTKStudioStickerCapability
@end

@protocol TTKUIAdaptivityService
@end

@protocol TikTokSearchEntryService
@end

@protocol TikTokSettingsModuleService
@end

@protocol TikTokTabBarModuleService
@end

@protocol TikTokUserJourneyModuleService
@end

@protocol UIBarPositioningDelegate
@end

@protocol UICollectionViewDataSource
@end

@protocol UICollectionViewDelegate
@end

@protocol UICollectionViewDelegateFlowLayout
@end

@protocol UIGestureRecognizerDelegate
@end

@protocol UIScrollViewDelegate
@end

@protocol UISearchBarDelegate
@end

@protocol UITableViewDataSource
@end

@protocol UITableViewDelegate
@end

@protocol UIViewControllerPreviewingDelegate
@end

@interface BDLDecompressor_MuseDiscoverFramework : NSObject <NSCopying>
{
    int _foo;
}

+ (void)load;
+ (double)getDecompressFixSelTime;
+ (double)getDecompressAllTime;
@property(nonatomic) int foo; // @synthesize foo=_foo;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

@interface BCAABundleContextPlaceholder : NSObject
{
}

@end

@interface PodsDummy_Pods_MuseDiscoverFramework : NSObject
{
}

@end

@interface AWEAppDiscoverSettingManager : NSObject
{
}

@end

@interface AWEDiscoverABTestRegister : NSObject
{
}

@end

@interface AWEDiscoverBannerCollectionViewCell : UICollectionViewCell
{
}

@end

@interface AWEDiscoverBannerManager : NSObject
{
}

@end

@interface AWEDiscoverBannerView : UIView
{
}

@end

@interface AWEDiscoverBannerViewController : UIViewController
{
}

@end

@interface AWEDiscoverCategoryModel : AWEBaseApiModel
{
}

@end

@interface AWEDiscoverCellTopView : UIView
{
}

@end

@interface AWEDiscoverCollectionViewCell : UICollectionViewCell
{
}

@end

@interface AWEDiscoverCollectionViewFooter : UIView
{
}

@end

@interface AWEDiscoverDataController : AWEListDataController
{
}

@end

@interface AWEDiscoverManager : NSObject
{
}

@end

@interface AWEDiscoverModuleConfig : NSObject
{
}

@end

@interface AWEDiscoverModuleService : NSObject
{
}

@end

@interface AWEDiscoverNavView : UIView
{
}

@end

@interface AWEDiscoverResponseModel : AWEBaseApiModel
{
}

@end

@interface AWEDiscoverTableViewCell : UITableViewCell
{
}

@end

@interface AWEDiscoverViewController : UIViewController
{
}

@end

@interface AWEEpidTabBannerView : AWEDiscoverBannerView
{
}

@end

@interface PodsDummy_TikTokDiscoverImp_Pods_MuseDiscoverFramework : NSObject
{
}

@end

@interface TikTokDiscoverSearchBarPlaceholderWordModel : MTLModel
{
}

@end

@interface TikTokDiscoverSearchBarPlaceholderResponseModel : MTLModel
{
}

@end

@interface TikTokDiscoverSearchBarPlaceholderResponseWrapperModel : MTLModel
{
}

@end

@interface TikTokDiscoverSearchBarPlaceholderManager : NSObject
{
}

@end

@interface TTKDiscoverBundleActivator : NSObject
{
}

@end

@interface TTKDiscoverSuggestedWordCell : UICollectionViewCell
{
}

@end

@interface TTKDiscoverSuggestedWordsView : UIView
{
}

@end

@interface TTKDiscoverTabContainerViewController : UIViewController
{
}

@end

@interface TTKTrendingViewController : UIViewController
{
}

@end

@interface AWEConfigManager (Discover) <AWEDiscoverConfigProtocol>

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

@interface UIImage (AWEMainColor)
- (id)awe_getMainColor;
@end

