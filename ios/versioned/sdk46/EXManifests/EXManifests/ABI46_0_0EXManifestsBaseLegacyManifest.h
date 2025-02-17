//  Copyright © 2021 650 Industries. All rights reserved.

#import <ABI46_0_0EXManifests/ABI46_0_0EXManifestsBaseManifest.h>

NS_ASSUME_NONNULL_BEGIN

@interface ABI46_0_0EXManifestsBaseLegacyManifest : ABI46_0_0EXManifestsBaseManifest

- (nullable NSDictionary *)expoGoConfigRootObject;
- (nullable NSDictionary *)expoClientConfigRootObject;

- (NSString *)stableLegacyId;
- (NSString *)scopeKey;
- (nullable NSString *)easProjectId;

- (NSString *)bundleUrl;
- (nullable NSString *)sdkVersion;
- (nullable NSArray *)assets;

@end

NS_ASSUME_NONNULL_END
