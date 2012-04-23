@interface Swizzler : NSObject

+(void)setSuperclassOf:(NSString*) aStr toClass:(NSString*) bStr;
+(void)extendClass:(NSString*) aStr withClass:(NSString*) bStr;

@end

@interface NSObject (SwizzleAdditions)

+(void)swizzleAddCategoryToClass:(Class) inClass;
+(void)swizzleMethod:(SEL) inOriginalSelector withMethod:(SEL) inReplacementSelector isClassMethod:(BOOL) inIsClassMethod;

@end