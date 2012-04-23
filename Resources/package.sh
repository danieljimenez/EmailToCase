MB="$PRODUCT_NAME.$WRAPPER_EXTENSION"
PKG="$PRODUCT_NAME.pkg"
DEST="root/Library/Mail/Bundles/"

uuid1=`defaults read "/Applications/Mail.app/Contents/Info" "PluginCompatibilityUUID"`
uuid2=`defaults read "/System/Library/Frameworks/Message.framework/Resources/Info" "PluginCompatibilityUUID"`
echo $uuid1;
echo $uuid2;
defaults write "$SRCROOT/Resources/Info" "SupportedPluginCompatibilityUUIDs" -array-add "$uuid1"
defaults write "$SRCROOT/Resources/Info" "SupportedPluginCompatibilityUUIDs" -array-add "$uuid2"

cd "$TARGET_BUILD_DIR"

/Developer/Tools/SetFile -a B $MB

mkdir -p $DEST
mv $MB $DEST

/Developer/usr/bin/packagemaker \
    --root root \
	--id "$PRODUCT_IDENTIFIER" \
	--title "$PRODUCT_NAME" \
	--domain user --scripts "$SRCROOT/Resources/Installer/Scripts" \
	--target 10.7 --version "$CURRENT_PROJECT_VERSION" \
	--out $PKG

mv $DEST/$MB .
rmdir -p $DEST
pkgutil --expand $PKG tmp
sed -i '' 's/ auth="[Rr]oot"//' tmp/Distribution tmp/*.pkg/PackageInfo
pkgutil --flatten tmp $PKG
tar -czvf $PRODUCT_NAME-$CURRENT_PROJECT_VERSION.tar.gz $MB
cp -f $PRODUCT_NAME-$CURRENT_PROJECT_VERSION.tar.gz /Users/djimenez/Library/Dropbox/Public/mailforce/app/
cp -f $PRODUCT_NAME.pkg /Users/djimenez/Library/Dropbox/Public/mailforce/app/
rm -rf tmp/