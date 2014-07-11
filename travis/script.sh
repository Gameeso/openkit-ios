#!/bin/bash
xcodebuild -project OpenKit.xcodeproj -configuration release -target OpenKit
xcodebuild -project OpenKit.xcodeproj -configuration release -target OpenKitUnity

mv build/Release-iphoneos/libOpenKitUnity.a OpenKitSDK

python package_sdk.py