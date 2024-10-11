import XCTest
import SwiftTreeSitter
import TreeSitterAbaqus

final class TreeSitterAbaqusTests: XCTestCase {
    func testCanLoadGrammar() throws {
        let parser = Parser()
        let language = Language(language: tree_sitter_abaqus())
        XCTAssertNoThrow(try parser.setLanguage(language),
                         "Error loading Abaqus grammar")
    }
}
