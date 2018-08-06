//
//  UDAdditions.swift
//  UniversalDetectorSwift
//
//  Created by C.W. Betts on 10/19/17.
//

import Foundation

extension UniversalDetector {
	public var encoding: String.Encoding? {
		let enc = __encoding
		if enc == 0 {
			return nil
		}
		return String.Encoding(rawValue: enc)
	}
}
