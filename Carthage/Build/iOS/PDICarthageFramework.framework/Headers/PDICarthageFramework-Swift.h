// Generated by Apple Swift version 4.0.3 (swiftlang-900.0.74.1 clang-900.0.39.2)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wgcc-compat"

#if !defined(__has_include)
# define __has_include(x) 0
#endif
#if !defined(__has_attribute)
# define __has_attribute(x) 0
#endif
#if !defined(__has_feature)
# define __has_feature(x) 0
#endif
#if !defined(__has_warning)
# define __has_warning(x) 0
#endif

#if __has_attribute(external_source_symbol)
# define SWIFT_STRINGIFY(str) #str
# define SWIFT_MODULE_NAMESPACE_PUSH(module_name) _Pragma(SWIFT_STRINGIFY(clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in=module_name, generated_declaration))), apply_to=any(function, enum, objc_interface, objc_category, objc_protocol))))
# define SWIFT_MODULE_NAMESPACE_POP _Pragma("clang attribute pop")
#else
# define SWIFT_MODULE_NAMESPACE_PUSH(module_name)
# define SWIFT_MODULE_NAMESPACE_POP
#endif

#if __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#include <objc/NSObject.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus) || __cplusplus < 201103L
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
# endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
typedef unsigned int swift_uint2  __attribute__((__ext_vector_type__(2)));
typedef unsigned int swift_uint3  __attribute__((__ext_vector_type__(3)));
typedef unsigned int swift_uint4  __attribute__((__ext_vector_type__(4)));
#endif

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif
#if !defined(SWIFT_CLASS_PROPERTY)
# if __has_feature(objc_class_property)
#  define SWIFT_CLASS_PROPERTY(...) __VA_ARGS__
# else
#  define SWIFT_CLASS_PROPERTY(...)
# endif
#endif

#if __has_attribute(objc_runtime_name)
# define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
#else
# define SWIFT_RUNTIME_NAME(X)
#endif
#if __has_attribute(swift_name)
# define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
#else
# define SWIFT_COMPILE_NAME(X)
#endif
#if __has_attribute(objc_method_family)
# define SWIFT_METHOD_FAMILY(X) __attribute__((objc_method_family(X)))
#else
# define SWIFT_METHOD_FAMILY(X)
#endif
#if __has_attribute(noescape)
# define SWIFT_NOESCAPE __attribute__((noescape))
#else
# define SWIFT_NOESCAPE
#endif
#if __has_attribute(warn_unused_result)
# define SWIFT_WARN_UNUSED_RESULT __attribute__((warn_unused_result))
#else
# define SWIFT_WARN_UNUSED_RESULT
#endif
#if __has_attribute(noreturn)
# define SWIFT_NORETURN __attribute__((noreturn))
#else
# define SWIFT_NORETURN
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_ENUM_EXTRA)
# define SWIFT_ENUM_EXTRA
#endif
#if !defined(SWIFT_CLASS)
# if __has_attribute(objc_subclassing_restricted)
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif

#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
# define SWIFT_PROTOCOL_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif

#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif

#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER
# endif
#endif
#if !defined(SWIFT_ENUM_ATTR)
# if defined(__has_attribute) && __has_attribute(enum_extensibility)
#  define SWIFT_ENUM_ATTR __attribute__((enum_extensibility(open)))
# else
#  define SWIFT_ENUM_ATTR
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name) enum _name : _type _name; enum SWIFT_ENUM_ATTR SWIFT_ENUM_EXTRA _name : _type
# if __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_ATTR SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME) SWIFT_ENUM(_type, _name)
# endif
#endif
#if !defined(SWIFT_UNAVAILABLE)
# define SWIFT_UNAVAILABLE __attribute__((unavailable))
#endif
#if !defined(SWIFT_UNAVAILABLE_MSG)
# define SWIFT_UNAVAILABLE_MSG(msg) __attribute__((unavailable(msg)))
#endif
#if !defined(SWIFT_AVAILABILITY)
# define SWIFT_AVAILABILITY(plat, ...) __attribute__((availability(plat, __VA_ARGS__)))
#endif
#if !defined(SWIFT_DEPRECATED)
# define SWIFT_DEPRECATED __attribute__((deprecated))
#endif
#if !defined(SWIFT_DEPRECATED_MSG)
# define SWIFT_DEPRECATED_MSG(...) __attribute__((deprecated(__VA_ARGS__)))
#endif
#if __has_feature(attribute_diagnose_if_objc)
# define SWIFT_DEPRECATED_OBJC(Msg) __attribute__((diagnose_if(1, Msg, "warning")))
#else
# define SWIFT_DEPRECATED_OBJC(Msg) SWIFT_DEPRECATED_MSG(Msg)
#endif
#if __has_feature(modules)
@import UIKit;
@import CoreGraphics;
@import ObjectiveC;
@import Foundation;
@import NMAKit;
#endif

#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
#if __has_warning("-Wpragma-clang-attribute")
# pragma clang diagnostic ignored "-Wpragma-clang-attribute"
#endif
#pragma clang diagnostic ignored "-Wunknown-pragmas"
#pragma clang diagnostic ignored "-Wnullability"

SWIFT_MODULE_NAMESPACE_PUSH("PDICarthageFramework")
@class UIWindow;
@class UIApplication;

SWIFT_CLASS("_TtC20PDICarthageFramework11AppDelegate")
@interface AppDelegate : UIResponder <UIApplicationDelegate>
@property (nonatomic, strong) UIWindow * _Nullable window;
- (BOOL)application:(UIApplication * _Nonnull)application didFinishLaunchingWithOptions:(NSDictionary<UIApplicationLaunchOptionsKey, id> * _Nullable)launchOptions SWIFT_WARN_UNUSED_RESULT;
- (void)applicationWillResignActive:(UIApplication * _Nonnull)application;
- (void)applicationDidEnterBackground:(UIApplication * _Nonnull)application;
- (void)applicationWillEnterForeground:(UIApplication * _Nonnull)application;
- (void)applicationDidBecomeActive:(UIApplication * _Nonnull)application;
- (void)applicationWillTerminate:(UIApplication * _Nonnull)application;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

@class UIImageView;
@class NSCoder;

SWIFT_CLASS("_TtC20PDICarthageFramework24CustomCollectionViewCell")
@interface CustomCollectionViewCell : UICollectionViewCell
@property (nonatomic, weak) IBOutlet UIImageView * _Null_unspecified arrowLaneCollectionCell;
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end

@class UIPanGestureRecognizer;
@class NSBundle;

SWIFT_CLASS("_TtC20PDICarthageFramework29DestinationCardViewController")
@interface DestinationCardViewController : UIViewController
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)animated;
- (void)didReceiveMemoryWarning;
- (IBAction)resumeNavigation:(id _Nonnull)sender;
- (IBAction)handleGesture:(UIPanGestureRecognizer * _Nonnull)sender;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC20PDICarthageFramework15DismissAnimator")
@interface DismissAnimator : NSObject
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

@protocol UIViewControllerContextTransitioning;

@interface DismissAnimator (SWIFT_EXTENSION(PDICarthageFramework)) <UIViewControllerAnimatedTransitioning>
- (NSTimeInterval)transitionDuration:(id <UIViewControllerContextTransitioning> _Nullable)transitionContext SWIFT_WARN_UNUSED_RESULT;
- (void)animateTransition:(id <UIViewControllerContextTransitioning> _Nonnull)transitionContext;
@end


SWIFT_CLASS("_TtC20PDICarthageFramework10Interactor")
@interface Interactor : UIPercentDrivenInteractiveTransition
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

@class NMAMapView;
@class UIView;
@class UILabel;
@class UIButton;
@class UIProgressView;
@class UICollectionView;
@class NSLayoutConstraint;
@class UITapGestureRecognizer;
@class NMANavigationManager;
@class NMAManeuver;
@class NMALaneInformation;
@class NMARoadElement;
@class UICollectionViewLayout;

SWIFT_CLASS("_TtC20PDICarthageFramework25MapExtendedViewController")
@interface MapExtendedViewController : UIViewController <NMAMapGestureDelegate, NMANavigationManagerDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout>
@property (nonatomic, weak) IBOutlet NMAMapView * _Null_unspecified mapView;
@property (nonatomic, weak) IBOutlet UIView * _Null_unspecified startNavigationView;
@property (nonatomic, weak) IBOutlet UIView * _Null_unspecified travelingInformationView;
@property (nonatomic, weak) IBOutlet UIView * _Null_unspecified routeOptionsView;
@property (nonatomic, weak) IBOutlet UILabel * _Null_unspecified zoomLabel;
@property (nonatomic, weak) IBOutlet UIImageView * _Null_unspecified drawerBar;
@property (nonatomic, weak) IBOutlet UILabel * _Null_unspecified distanceToDestinationLabel;
@property (nonatomic, weak) IBOutlet UILabel * _Null_unspecified destinationLabel;
@property (nonatomic, weak) IBOutlet UIView * _Null_unspecified draweMenuView;
@property (nonatomic, weak) IBOutlet UIButton * _Null_unspecified muteButton;
@property (nonatomic, weak) IBOutlet UIButton * _Null_unspecified tiltCameraButton;
@property (nonatomic, weak) IBOutlet UIButton * _Null_unspecified reCenterPosButton;
@property (nonatomic, weak) IBOutlet UIView * _Null_unspecified rightSideButtonView;
@property (nonatomic, weak) IBOutlet UIView * _Null_unspecified leftSideButtonView;
@property (nonatomic, weak) IBOutlet UIView * _Null_unspecified speedSignView;
@property (nonatomic, weak) IBOutlet UIProgressView * _Null_unspecified progressBar;
@property (nonatomic, weak) IBOutlet UIView * _Null_unspecified progressBarSuperView;
@property (nonatomic, weak) IBOutlet UIView * _Null_unspecified maneuverSmallView;
@property (nonatomic, weak) IBOutlet UILabel * _Null_unspecified distanceToNextManeuverLabel;
@property (nonatomic, weak) IBOutlet UIImageView * _Null_unspecified currentManeuverImage;
@property (nonatomic, weak) IBOutlet UIView * _Null_unspecified maneuverMediumView;
@property (nonatomic, weak) IBOutlet UIImageView * _Null_unspecified currentManeuverImageMedium;
@property (nonatomic, weak) IBOutlet UILabel * _Null_unspecified distanceToNextManeuverLabelMedium;
@property (nonatomic, weak) IBOutlet UILabel * _Null_unspecified nextRoadNameLabelMedium;
@property (nonatomic, weak) IBOutlet UIView * _Null_unspecified maneuverLargeView;
@property (nonatomic, weak) IBOutlet UILabel * _Null_unspecified distanceToNextManeuverLabelLarge;
@property (nonatomic, weak) IBOutlet UILabel * _Null_unspecified nextRoadNameLabelLarge;
@property (nonatomic, weak) IBOutlet UICollectionView * _Null_unspecified collectionView;
@property (nonatomic, weak) IBOutlet UILabel * _Null_unspecified arrivalTimeLabel;
@property (nonatomic, weak) IBOutlet UILabel * _Null_unspecified hoursTilDest;
@property (nonatomic, weak) IBOutlet UILabel * _Null_unspecified timeUnitLabel;
@property (nonatomic, weak) IBOutlet UILabel * _Null_unspecified distanceUnitLabel;
@property (nonatomic, weak) IBOutlet UILabel * _Null_unspecified speedLimitSignLabel;
@property (nonatomic, weak) IBOutlet NSLayoutConstraint * _Null_unspecified smallViewToTopBar;
@property (nonatomic, weak) IBOutlet NSLayoutConstraint * _Null_unspecified mediumViewToTopBar;
@property (nonatomic, weak) IBOutlet NSLayoutConstraint * _Null_unspecified largeViewToTopBar;
@property (nonatomic, weak) IBOutlet NSLayoutConstraint * _Null_unspecified rightSideButtonContraints;
@property (nonatomic, weak) IBOutlet NSLayoutConstraint * _Null_unspecified speedLimitViewConstraints;
@property (nonatomic, weak) IBOutlet NSLayoutConstraint * _Null_unspecified progressBarConstraint;
@property (nonatomic, weak) IBOutlet NSLayoutConstraint * _Null_unspecified etaHeightContraint;
@property (nonatomic, weak) IBOutlet NSLayoutConstraint * _Null_unspecified showDestinationConstraint;
- (IBAction)closeMenuDrawer:(id _Nonnull)sender;
- (IBAction)closeMenuDrawer2:(id _Nonnull)sender;
- (IBAction)exitNavigation:(id _Nonnull)sender;
- (void)viewDidLoad;
- (void)expandMenuDrawerWithSender:(UITapGestureRecognizer * _Nonnull)sender;
- (IBAction)backToTableView:(id _Nonnull)sender;
- (void)viewWillAppear:(BOOL)animated;
- (void)positionDidUpdate;
- (void)didLosePosition;
@property (nonatomic, readonly) BOOL prefersStatusBarHidden;
@property (nonatomic, readonly) UIStatusBarAnimation preferredStatusBarUpdateAnimation;
@property (nonatomic, readonly) UIStatusBarStyle preferredStatusBarStyle;
- (void)viewWillDisappear:(BOOL)animated;
- (void)didReceiveMemoryWarning;
- (IBAction)onStartGuidanceButtonClicked:(id _Nonnull)sender;
- (void)navigationManagerDidReachDestination:(NMANavigationManager * _Nonnull)navigationManager;
- (void)navigationManager:(NMANavigationManager * _Nonnull)navigationManager hasCurrentManeuver:(NMAManeuver * _Nullable)currentManeuver nextManeuver:(NMAManeuver * _Nullable)nextManeuver;
- (void)navigationManager:(NMANavigationManager * _Nonnull)navigationManager didUpdateLaneInformation:(NSArray<NMALaneInformation *> * _Nonnull)laneInformations roadElement:(NMARoadElement * _Nullable)roadElement;
- (void)navigationManager:(NMANavigationManager * _Nonnull)navigationManager didUpdateSpeedingStatus:(BOOL)isSpeeding forCurrentSpeed:(float)speed speedLimit:(float)speedLimit;
- (IBAction)onStopGuidanceButtonClicked:(id _Nonnull)sender;
- (void)mapView:(NMAMapView * _Nonnull)mapView didReceiveTapAtLocation:(CGPoint)location;
- (NSInteger)collectionView:(UICollectionView * _Nonnull)collectionView numberOfItemsInSection:(NSInteger)section SWIFT_WARN_UNUSED_RESULT;
- (UICollectionViewCell * _Nonnull)collectionView:(UICollectionView * _Nonnull)collectionView cellForItemAtIndexPath:(NSIndexPath * _Nonnull)indexPath SWIFT_WARN_UNUSED_RESULT;
- (UIEdgeInsets)collectionView:(UICollectionView * _Nonnull)collectionView layout:(UICollectionViewLayout * _Nonnull)collectionViewLayout insetForSectionAtIndex:(NSInteger)section SWIFT_WARN_UNUSED_RESULT;
- (IBAction)muteButtonClicked:(id _Nonnull)sender;
- (IBAction)tiltCameraClicked:(id _Nonnull)sender;
- (IBAction)recenterButtonClicked:(id _Nonnull)sender;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end

@protocol UIViewControllerInteractiveTransitioning;

@interface MapExtendedViewController (SWIFT_EXTENSION(PDICarthageFramework)) <UIViewControllerTransitioningDelegate>
- (id <UIViewControllerAnimatedTransitioning> _Nullable)animationControllerForDismissedController:(UIViewController * _Nonnull)dismissed SWIFT_WARN_UNUSED_RESULT;
- (id <UIViewControllerInteractiveTransitioning> _Nullable)interactionControllerForDismissal:(id <UIViewControllerAnimatedTransitioning> _Nonnull)animator SWIFT_WARN_UNUSED_RESULT;
@end

@class UIStoryboardSegue;

@interface MapExtendedViewController (SWIFT_EXTENSION(PDICarthageFramework))
- (void)prepareForSegue:(UIStoryboardSegue * _Nonnull)segue sender:(id _Nullable)sender;
@end







@class UITableView;
@class UITableViewCell;

SWIFT_CLASS("_TtC20PDICarthageFramework29TestRoutesTableViewController")
@interface TestRoutesTableViewController : UITableViewController
- (void)viewDidLoad;
- (void)didReceiveMemoryWarning;
- (NSInteger)numberOfSectionsInTableView:(UITableView * _Nonnull)tableView SWIFT_WARN_UNUSED_RESULT;
- (NSInteger)tableView:(UITableView * _Nonnull)tableView numberOfRowsInSection:(NSInteger)section SWIFT_WARN_UNUSED_RESULT;
- (UITableViewCell * _Nonnull)tableView:(UITableView * _Nonnull)tableView cellForRowAtIndexPath:(NSIndexPath * _Nonnull)indexPath SWIFT_WARN_UNUSED_RESULT;
- (void)prepareForSegue:(UIStoryboardSegue * _Nonnull)segue sender:(id _Nullable)sender;
- (nonnull instancetype)initWithStyle:(UITableViewStyle)style OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end






@interface UIProgressView (SWIFT_EXTENSION(PDICarthageFramework))
@property (nonatomic) CGFloat barHeight;
@end

SWIFT_MODULE_NAMESPACE_POP
#pragma clang diagnostic pop
