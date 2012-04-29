Using the [mailbundle](https://github.com/stl/MailBundle-Template) template found on github, I created this bundle from scratch for OS X Lion. 

It simply adds a toolbar button and menu item to the Mail.app toolbar that, when clicked will add your email to a case in SalesForce.com. If the email already has a SalesForce.com reference code in it, it will automatically locate the case. If not, it will prompt you to search for the case.

I host the binaries in my personal dropbox and the app uses sparkle to keep updated. This is critical as each OS X release has new compatilibity ids that must be added to the bundle's info.plist. See package.sh for the inner workings.