#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

/// You can enable this heuristic by setting the BOOL with that key in NSUserDefaults -standardUserDefaults to YES.
/// In this case, only -encoding wll be valid and -MIMECharset will be invalid.
extern NSString * const	UniversalDetectorUseMacRomanHeuristic;

typedef NS_OPTIONS(signed char, UDLanguageFilter) {
	UDLanguageChineseSimplified = 1 << 0,
	UDLanguageChineseTraditional = 1 << 1,
	UDLanguageJapanese = 1 << 2,
	UDLanguageKorean = 1 << 3,
	UDLanguageNonCJK = 1 << 4,
	UDLanguageAll = 0x1f,
	
	UDLanguageChinese = (UDLanguageChineseSimplified |
						 UDLanguageChineseTraditional),
	UDLanguageCJK = (UDLanguageChineseSimplified |
					 UDLanguageChineseTraditional |
					 UDLanguageJapanese |
					 UDLanguageKorean),
};

@interface UniversalDetector:NSObject

+(instancetype)detector;
+(instancetype)detectorWithFilter:(UDLanguageFilter)aFilter;
+(NSArray<NSString*> *)possibleMIMECharsets;

-(instancetype)init;
-(instancetype)initWithFilter:(UDLanguageFilter)aFilter NS_DESIGNATED_INITIALIZER;

-(void)analyzeContentsOfFile:(NSString *)path;
-(void)analyzeContentsOfURL:(NSURL *)url;
-(void)analyzeData:(NSData *)data;
-(void)analyzeBytes:(const char *)data length:(int)len;
-(void)reset;

@property (nonatomic, readonly, getter=isDone) BOOL done;
@property (nonatomic, copy, readonly, nullable) NSString *MIMECharset;
@property (nonatomic, readonly) NSStringEncoding encoding;
@property (nonatomic, readonly) float confidence;
@property (nonatomic, readonly) UDLanguageFilter languageFilter;

@end

NS_ASSUME_NONNULL_END
