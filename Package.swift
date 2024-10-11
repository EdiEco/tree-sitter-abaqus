// swift-tools-version:5.3
import PackageDescription

let package = Package(
    name: "TreeSitterAbaqus",
    products: [
        .library(name: "TreeSitterAbaqus", targets: ["TreeSitterAbaqus"]),
    ],
    dependencies: [
        .package(url: "https://github.com/ChimeHQ/SwiftTreeSitter", from: "0.8.0"),
    ],
    targets: [
        .target(
            name: "TreeSitterAbaqus",
            dependencies: [],
            path: ".",
            sources: [
                "src/parser.c",
                // NOTE: if your language has an external scanner, add it here.
            ],
            resources: [
                .copy("queries")
            ],
            publicHeadersPath: "bindings/swift",
            cSettings: [.headerSearchPath("src")]
        ),
        .testTarget(
            name: "TreeSitterAbaqusTests",
            dependencies: [
                "SwiftTreeSitter",
                "TreeSitterAbaqus",
            ],
            path: "bindings/swift/TreeSitterAbaqusTests"
        )
    ],
    cLanguageStandard: .c11
)
