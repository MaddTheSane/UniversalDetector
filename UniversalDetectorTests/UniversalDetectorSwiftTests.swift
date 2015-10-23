//
//  UniversalDetectorSwiftTests.swift
//  UniversalDetector
//
//  Created by C.W. Betts on 10/23/15.
//
//

import XCTest
import UniversalDetector

class UniversalDetectorSwiftTests : XCTestCase {
	private var detector: UniversalDetector!
	
	override func setUp() {
		super.setUp()
		detector = UniversalDetector()
	}
	
	override func tearDown() {
		detector = nil
		super.tearDown()
	}
	
	func testISOLatin1() {
		
	}
}


