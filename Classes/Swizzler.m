#import <objc/runtime.h>
#import "Swizzler.h"

#define SWIZZLE_PREFIX_STRING @"_"
#define SWIZZLE_PREFIX_LENGTH 1


@implementation Swizzler

+(void)setSuperclassOf:(NSString*) aStr toClass:(NSString*) bStr {
    Class aClass = NSClassFromString(aStr);
    Class bClass = NSClassFromString(bStr);

    class_setSuperclass(aClass, bClass);
}

/* Useful if you need forceful take over of a class */
+(void)extendClass:(NSString*) aStr withClass:(NSString*) bStr {
    Class aClass = NSClassFromString(aStr);
    Class bClass = NSClassFromString(bStr);

    uint methodCount, i;

    Method* bMethods = class_copyMethodList(bClass, &methodCount);

    for (i = 0; i < methodCount; i++) {
        Method bMethod = bMethods[i];
        SEL bSel    = method_getName(bMethod);

        class_addMethod(aClass, bSel,
                        method_getImplementation(bMethod),
                        method_getTypeEncoding(bMethod));

        bStr = NSStringFromSelector(bSel);

        if ([bStr hasPrefix:SWIZZLE_PREFIX_STRING]) {
            aStr = [bStr substringFromIndex:SWIZZLE_PREFIX_LENGTH];
            SEL aSel = NSSelectorFromString(aStr);

            method_exchangeImplementations(class_getInstanceMethod(aClass, aSel),
                                           class_getInstanceMethod(aClass, bSel));
        }
    }

    free(bMethods);
}

@end

@implementation NSObject (SwizzleAdditions)

+(void)swizzleAddCategoryToClass:(Class) inClass {
    unsigned int theCount   = 0;
    Method* theMethods = class_copyMethodList(object_getClass([self class]), &theCount);
    Class theClass   = object_getClass(inClass);
    unsigned int i          = 0;

    while (YES) {
        for (i = 0; i < theCount; i++) {
            if (
                !class_addMethod(
                    theClass,
                    method_getName(theMethods[i]),
                    method_getImplementation(theMethods[i]),
                    method_getTypeEncoding(theMethods[i])
                    )
                ) {
                NSLog(
                    @"%@: could not add %@ to %@",
                    NSStringFromSelector(_cmd),
                    NSStringFromSelector(method_getName(theMethods[i])),
                    inClass
                    );
            }
        }

        if (theMethods != nil) {
            free(theMethods);
        }

        if (theClass != inClass) {
            theClass   = inClass;
            theMethods = class_copyMethodList([self class], &theCount);
        }
        else {
            break;
        }
    }
}

+(void)swizzleMethod:(SEL) inOriginalSelector withMethod:(SEL) inReplacementSelector isClassMethod:(BOOL) inIsClassMethod {
    Method theOriginalMethod    = (!inIsClassMethod ? class_getInstanceMethod([self class], inOriginalSelector) : class_getClassMethod([self class], inOriginalSelector));
    Method theReplacementMethod = (!inIsClassMethod ? class_getInstanceMethod([self class], inReplacementSelector) : class_getClassMethod([self class], inReplacementSelector));

    method_exchangeImplementations(theOriginalMethod, theReplacementMethod);
}

@end
