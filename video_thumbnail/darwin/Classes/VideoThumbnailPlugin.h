// #import <Flutter/Flutter.h>

#if TARGET_OS_IPHONE
#import <Flutter/Flutter.h>
#elif TARGET_OS_MAC
#import <FlutterMacOS/FlutterMacOS.h>
#endif

@interface VideoThumbnailPlugin : NSObject<FlutterPlugin>
@end
