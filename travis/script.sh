#!/bin/bash
xctool -project OpenKit.xcodeproj -scheme OpenKit
python package_sdk.py

git tag
git pull --tags