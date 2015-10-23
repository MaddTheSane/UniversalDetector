#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

// You can enable this heuristic by setting the BOOL with that key in NSUserDefaults -standardUserDefaults to YES.
// In this case, only -encoding wll be valid and -MIMECharset will be invalid.
extern NSString * const	UniversalDetectorUseMacRomanHeuristic;

@interface UniversalDetector:NSObject

+(instancetype)detector;
+(NSArray<NSString*> *)possibleMIMECharsets;

-(instancetype)init NS_DESIGNATED_INITIALIZER;

-(void)analyzeContentsOfFile:(NSString *)path;
-(void)analyzeContentsOfURL:(NSURL *)url;
-(void)analyzeData:(NSData *)data;
-(void)analyzeBytes:(const char *)data length:(int)len;
-(void)reset;

@property (nonatomic, readonly, getter=isDone) BOOL done;
@property (nonatomic, copy, readonly, nullable) NSString *MIMECharset;
@property (readonly, nonatomic) NSStringEncoding encoding;
@property (readonly) float confidence;

@end

NS_ASSUME_NONNULL_END
