#!/bin/bash
xctool -project OpenKit.xcodeproj -scheme OpenKit
python package_sdk.py

if [[ $TRAVIS_BRANCH != 'master' ]]
	echo "Not on master branch, Deleting Gameeso-iOS-SDK.zip so it wont get uploaded to GitHub Releases"
	rm Gameeso-iOS-SDK.zip
fi