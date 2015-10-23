//
//  UniversalDetectorTests.m
//  UniversalDetectorTests
//
//  Created by C.W. Betts on 10/23/15.
//
//

#import <XCTest/XCTest.h>
#import <UniversalDetector/UniversalDetector.h>

@interface UniversalDetectorTests : XCTestCase
@property (strong) UniversalDetector *detector;
@end

@implementation UniversalDetectorTests

- (void)setUp {
    [super setUp];
    // Put setup code here. This method is called before the invocation of each test method in the class.
	_detector = [UniversalDetector detector];
}

- (void)tearDown {
	_detector = nil;
    // Put teardown code here. This method is called after the invocation of each test method in the class.
    [super tearDown];
}

- (void)testISOLatin1 {
    // This is an example of a functional test case.
    // Use XCTAssert and related functions to verify your tests produce the correct results.
}

@end
